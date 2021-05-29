#include<bits/stdc++.h>
using namespace std;

string IncDecSt(string st){
  int Charcount[26]={};
  for(char ch: st){
    Charcount[ch -'a']++;
  }
  string res ="";
  int count = st.size();
  while(count>0){
    for(int i=0;i<26;i++){
      if(Charcount[i]>0){
        res.push_back(char(i+97));
        Charcount[i]--;
        count--;
      }
    }
    for(int i=25;i>=0;i--){
      if(Charcount[i]>0){
        res.push_back(char(i+97));
        Charcount[i]--;
        count--;
      }
    }
  }
  return res;
}

int main(){
  string str={"aaaabbbbcccc"};
  string st;
  st = IncDecSt(str);
  cout<<"string is:"<<endl;
  cout<<st<<endl;
  return 0;
}
