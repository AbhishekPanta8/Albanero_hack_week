#include<bits/stdc++.h>
using namespace std;
vector<string> firstCap(vector<string> str){
  for(int i=0;i<str.size();i++){
    if(int(str[i][0]) >= 97)
      str[i][0]= str[i][0] - 32;
  }
  return str;
}

int main(){
  vector<string> str{"samuel", "MABELLE", "letitia", "meridith"};
  vector<string> output;
  output= firstCap(str);
  cout<<"The array of names after capitalizing each first character of string is:"<<endl;
  for (int i = 0; i < output.size(); i++)
  {
    cout<<output[i]<<endl;
  }
  return 0;
}