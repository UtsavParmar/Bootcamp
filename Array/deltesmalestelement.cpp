#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int index;
    int mini=INT_MAX;

    int arr[n];
      for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
      for(int i = 0; i < n; i++) {
        if(arr[i] < mini) {
            mini = arr[i];
            index = i;
        }
    }

    for(int i =index;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

}