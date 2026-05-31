#include <bits/stdc++.h>
using namespace std;

int main() {

    int rows, colm;
    cin >> rows >> colm;
    int arr[rows][colm];

    // original matrix input
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < colm; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i=0;i<rows-1;i++){
        for(int j=i+1;j<rows;j++){
            swap(arr[i][j],arr[j][i]);
        }

    }

    for(int i=0;i<rows;i++){
        reverse(arr[i],arr[i]+rows);
    }
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < colm; j++) {
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
}