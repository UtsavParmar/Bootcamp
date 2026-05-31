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

    for(int i =0;i<rows;i++){
        for(int j=0;j<colm;j++){
             if(i%2==0){

                arr[i][j]=-arr[i][j];
        }

        }
    }
    int start=0;
    int end=rows-1;
    
        for(int j=0;j<colm;j++){

         swap(arr[start][j],arr[end][j]);
        }
        

      for(int i =0;i<rows;i++){
        for(int j=0;j<colm;j++){
            cout<<arr[i][j]<<" ";
           
        }
         cout<<endl;
}

}