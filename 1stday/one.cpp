#include<bits/stdc++.h>
using namespace std;

int main(){
  string str;
  int n;
  cin>>n;
  if(n%2==0){
    for(int i=0;i<n-1;i++){
      str= str+'p';
    }
    str=str+'z';
  }
  else{
    for(int i=0;i<n;i++){
      str=str+'p';
    }
  }
  cout<<str<<endl;
}
