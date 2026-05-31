#include <bits\stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int l,r;
    cin>>l>>r;
    int sum=0;

    int arr[n];
      for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // for(int i=l;i<=r;i++){
    //     sum+=arr[i];

    // }
    // cout<<sum;

                //Using prefix sum


        int prefix[n];
        prefix[0]=arr[0];

        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+arr[i];
        }
        if(l==0){
            sum=prefix[r];
        }
        else{
            sum=prefix[r]-prefix[l-1];
        }
        cout<<sum;

}