#include<bits/stdc++.h>
using namespace std;
bool findRep(int val){
  string str= to_string(val);
  char first;
  int len=str.length();
  if(val==0)
    return true;
  else if(val>0 && len>=2){
    first=str[0];
    for(int i=1;i<len;i++){
      if(first!=str[i])
        return false;
    }
  }
  else if(val<0)
    return false;
  return true;
}
int main(){
  int n;
  bool x;
  cout<<"Enter the number:"<<endl;
  cin>>n;
  x=findRep(n);
  if(x)cout<<"true"<<endl;
  else cout<<"false"<<endl; 
  return 0;
}