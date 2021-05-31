#include<bits/stdc++.h>
using namespace std;
int finddiff(int n1,int n2){
  int sum=0,diff;
  vector<int>v1;
  vector<int>v2;
  while(n1!=0){
    v1.push_back(n1%10);
    n1 = n1 / 10;
    v2.push_back(n2%10);
    n2=n2/10;
  }
  for(int i=0;i<v1.size();i++){
    diff= (v2[i]-v1[i]);
    sum+=diff;
  }
  return sum;
}
int main(){
  int num1,num2,value;
  cout<<"Enter the value of num1 and num2 of equal length where value of num2 is greater than that of num1"<<endl;
  cin>>num1>>num2;
  value=finddiff(num1,num2);
  cout<<"The distance between  numbers is:"<<value<<endl;
  return 0;
}