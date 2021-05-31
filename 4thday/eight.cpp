#include<bits/stdc++.h>
using namespace std;
int findmin(int index,vector<int>minprice){
  if(index>=minprice.size())
    return 0;
  int min1=findmin(index+1,minprice);
  int min2=findmin(index+2,minprice);
  int minimum = min(min1,min2);
  return minimum+minprice[index];
}
int minCost(vector<int>price){
  int finalmin= min(findmin(0,price),findmin(1,price));
  return finalmin;
}
int main(){
  int n,value,input;
  cout<<"Enter the total no.of ladders"<<endl;
  cin>>n;
  vector<int> price;
  cout<<"Enter the price ladders respectively"<<endl;
  for(int i=0;i<n;i++){
    cin>>input;
    price.push_back(input);
  }
  value=minCost(price);
  cout<<"The Cheapeset cost is:"<<value<<endl;
  return 0;
}