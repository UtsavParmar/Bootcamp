#include <bits/stdc++.h>
using namespace std;
int main(){
    string str="hello ji";

    string ans="";

    for(int i=0;str[i]!='\0';i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!=' '){
            ans[i]+=str[i];
        }
    }

    for(int i=0;i<str.length();i++){
        cout<<ans[i];
    }
}