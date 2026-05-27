#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum=0;
    int rows,colm;
    cin>>rows>>colm;
    int arr[rows][colm];

    for(int i=0;i<rows;i++){
        for(int j=0;j<colm;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<colm;j++){
            if(i==0 || j==0 || i==rows-1 || j==colm-1){
                sum+=arr[i][j];
            }
        }
    }
    

    cout<<sum;

}