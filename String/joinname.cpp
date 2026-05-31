#include <bits/stdc++.h>
using namespace std;
int main(){
    string name;
    string studentID;
    cin>>name;
    cin>>studentID;

    for(int i=0;i<name.length();i++){
        if(name[i]>='A' && name[i]<='Z'){
            name[i]=name[i]+32;
        }
    }

    stringstream ss(name);

    string word;
    string firstname=" ";
    string lastname=" ";
    bool firstWordFound =false;

    while(ss>>word){
        if(!firstWordFound){
            firstname=word;
            firstWordFound=true;
        }
        lastname=word;
    }
    string username=firstname + " "+ lastname + studentID;
    cout<<username;
    return 0;

}