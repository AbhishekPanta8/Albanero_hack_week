#include<bits/stdc++.h>
using namespace std;
string fullBytes(string st){
  int count=0;
  string output=st;
  for(int i=0;i<st.length();i++){
    if(st[i]=='1'){
      count++;
    }
  }
  if(count%2==0)
    output.push_back('0');
  else
    output.push_back('1');
  return output;
}
int main(){
  string str,out;
  cout<<"Enter the value of 7 bit parity"<<endl;
  cin>>str;
  out=fullBytes(str);
  cout<<"8 bit parity code is:"<<out<<endl;
  return 0;
}