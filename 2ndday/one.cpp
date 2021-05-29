#include<bits/stdc++.h>
using namespace std;
vector<string> findNreplace(vector<string>st,string pat){
  vector<string> res;
  for(int i=0;i<st.size();i++){
    map<char,char>m1;
    map<char,char>m2;
    int flag=1;
    for(int j=0;j<st[i].size();j++){
      auto it=m1.find(pat[j]);
      auto it2=m2.find(st[i][j]);
      if(it==m1.end()){
        m1.insert({pat[j],st[i][j]});
      }
      else{
        if(it->second!=st[i][j]){
          flag=0;
          break;
        }
      }
      //for second mapping
      if(it2==m2.end())
      {
        m2.insert({st[i][j],pat[j]});
      }
      else{
        if(it2->second!=pat[j]){
          flag=0;
          break;
        }
      }
    }
    if(flag==1)
      res.push_back(st[i]);
  }
  return res;
}

int main(){
  vector<string> str{"abc","deq","mee","aqq","dkd","ccc"};
  vector<string> output;
  string pattern="abb";
  output= findNreplace(str,pattern);
  cout<<"The string obeying the given pattern are:"<<endl;
  for (int i = 0; i < output.size(); i++)
  {
    cout<<output[i]<<endl;
  }
  return 0;
}
