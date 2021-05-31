#include<bits/stdc++.h>
using namespace std;
bool checkSS(string st1,string st2){
  int pos=0;
  for(int i=0;st1[i]!='\0';i++){
    while(st2[pos] && st2[pos]!=st1[i])
      pos++;
    if(st2[pos]=='\0')
      return false;
    pos++;
  }
  return true;
}
int main(){
  bool x;
  string s={"axc"};
  string t={"ahbgdc"};
  x= checkSS(s,t);
  if(x)cout<<"true";
  else cout<<"false";
  return 0;
}