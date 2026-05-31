#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    // int maxi=INT_MIN;
    int mini=INT_MAX;
    

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // for(int i:arr){
    //   maxi=max(maxi,i);
    // }

     for(int i:arr){
      mini=min(mini,i);
    }
    cout<<mini;
}