#include<bits/stdc++.h>
using namespace std;
int findMean(int val){
  int sum=0,i=0;
  while(val!=0){
    sum+= val%10;
    val = val/10;
    i++;
  }
  return sum/i;
}
int main(){
  int num,val;
  cout<<"Enter the value of digit:"<<endl;
  cin>>num;
  val=findMean(num);
  cout<<"Mean of the given digit is:"<<val<<endl;
  return 0;
}