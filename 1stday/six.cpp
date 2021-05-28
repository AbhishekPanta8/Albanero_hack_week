#include<bits/stdc++.h>
using namespace std;

int main(){
  int first,diff,n;
  cout<<"enter first,diff and number respectively"<<endl;
  cin>>first>>diff>>n;
  int *arr1 = new int[n];
  arr1[0]=first;
  for(int i=0;i<n-1;i++){
    arr1[i+1]=(arr1[i]+diff);
  }
  cout<<"Elements in AP is:"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr1[i]<<endl;
  }
}