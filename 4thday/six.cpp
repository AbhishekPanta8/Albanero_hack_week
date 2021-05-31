#include<bits/stdc++.h>
using namespace std;
int distWay(int val){
  if(val<=2)
    return val;
  int prev=1,next=2;
  for(int i=3;i<=val;i++){
    int temp=next;
    next = next + prev;
    prev = temp;
  }
  return next;
}
int main(){
  int n,output;
  cout<<"Enter the no.of stairs in the ladder"<<endl;
  cin>>n;
  output=distWay(n);
  cout<<"The climber can climb the ladder in "<<output<<" distinct ways!"<<endl;
  return 0;
}