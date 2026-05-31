#include <bits/stdc++.h>
using namespace std;

int main() {

    int rows, colm;
    cin >> rows >> colm;
    int maxi1=INT_MIN;
   
    int index;

    int arr[100][100];

    // original matrix input
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < colm; j++) {
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<colm;j++){
            sum+=arr[i][j];
            
            }
            if(sum>maxi1){
                maxi1=sum;
                index=i;


        }
       
        
    }
     for(int i=index;i<rows-1;i++){
         for(int j=0;j<colm;j++){
            arr[i][j]=arr[i+1][j];
         }
        }
        rows--;

         for(int i=0;i<rows;i++){
         for(int j=0;j<colm;j++){
            cout<<arr[i][j]<<" ";
            
         }
         cout<<endl;
        }
        

    
}