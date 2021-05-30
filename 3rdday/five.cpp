#include<bits/stdc++.h>
using namespace std;

bool isogram(string st){
  int Charcount[26]={0};
  for(char ch: st){
    Charcount[ch -'a']++;
    if(Charcount[ch - 'a']>1)
      return false;
  }
  return true;
}

int main(){
  string str={"isogram"};
  string str2={"pasSword"};
  bool x,y;
  x = isogram(str);
  y= isogram(str2);
  if(x)cout<<"true"<<endl;
  else cout<<"false"<<endl;  
  if(y)cout<<"true"<<endl;
  else cout<<"false"<<endl; 
  return 0;
}