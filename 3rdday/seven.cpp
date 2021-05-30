#include<bits/stdc++.h>
using namespace std;
int * arrMul(int arr[],int num,int l){
  int *arr2 = new int[l];
  for(int i=1;i<=l;i++){
    arr2[i-1]=i*num;
  }
  return arr2;
}
int main(){
  int n,length;
  cout<<"Enter the value of num and length:"<<endl;
  cin>>n>>length;
  int *arr = new int[n];
  arr=arrMul(arr,n,length);
  cout<<"array elements after multiplication is:"<<endl;
  for(int i=0;i<length;i++){
    cout<<arr[i]<<" "<<endl;
  }
  return 0;
}