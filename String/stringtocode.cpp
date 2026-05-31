#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  string word;
  cin>>word;
  char c;
  cin>>c;

  int pos=s.find(word);

  if(pos!=string::npos){ //pos present in string coz!= used
    s.replace(pos,word.length(),string(1,c));

  }
  cout<<s;

    }
    



