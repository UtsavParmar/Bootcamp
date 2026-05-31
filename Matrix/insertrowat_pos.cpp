#include <bits/stdc++.h>
using namespace std;

int main() {

    int rows, colm;
    cin >> rows >> colm;

    int arr[100][100];

    // original matrix input
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < colm; j++) {
            cin >> arr[i][j];
        }
    }

    int pos;
    cin >> pos;

    // new row input
    int newRow[100];

    for(int i = 0; i < colm; i++) {
        cin >> newRow[i];
    }

    int newArr[100][100];

    // copy rows before position
    for(int i = 0; i < pos; i++) {
        for(int j = 0; j < colm; j++) {
            newArr[i][j] = arr[i][j];
        }
    }

    // insert new row
    for(int j = 0; j < colm; j++) {
        newArr[pos][j] = newRow[j];
    }

    // copy remaining rows
    for(int i = pos; i < rows; i++) {
        for(int j = 0; j < colm; j++) {
            newArr[i + 1][j] = arr[i][j];
        }
    }

    rows++;

    // print updated matrix
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < colm; j++) {
            cout << newArr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}