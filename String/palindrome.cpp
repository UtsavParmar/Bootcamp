#include <bits/stdc++.h>
using namespace std;
int main(){
    string str="madam";
    // string reverseword="";

    // for(int i=str.length()-1;i>=0;i--){
    //     reverseword+=str[i];
    // }


    // if(reverseword==str){
    //     cout<<"palindrome";
        
    // }
    
    // else{
    //     cout<<"not palindrome";
    // }

    string temp=str;
    reverse(temp.begin(),temp.end());
    if(temp==str){
       cout<<"palindrome";
        
     }
    
     else{
         cout<<"not palindrome";
    }
    

}