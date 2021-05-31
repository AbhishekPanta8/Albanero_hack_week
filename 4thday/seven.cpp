#include<bits/stdc++.h>
using namespace std;
vector<int> onesNum(int n){
  vector<int> countone(n+1);
  countone[0]=0;
  for(int i=1;i<=n;i++){
    countone[i]=countone[i/2]+i%2;
  }
  return countone;
}
int main(){
  int n;
  vector<int> output;
  cout<<"Enter the value of Integer:"<<endl;
  cin>>n;
  output= onesNum(n);
  for(int i=0;i<output.size();i++){
    cout<<output[i]<<endl;
  }
  return 0;
}