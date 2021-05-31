#include<bits/stdc++.h>
using namespace std;
int get_set(int arr[],int n){
  if(n==1)
    return n;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]>arr[j]){
        int temp= arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
  int j=0;
  for(int i=0;i<n-1;i++){
    if(arr[i]!=arr[i+1]){
      arr[j++]=arr[i];
    }
  }
  arr[j++]=arr[n-1];
  return j;
}
int main(){
  int n;
  cout<<"Enter the no.of elements in an array:"<<endl;
  cin>>n;
  if(n==0)
  {
    cout<<"empty array";
    return 0;
  }
  int *arr = new int[n];
  int x;
  cout<<"Enter the elements in the array."<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  x = get_set(arr,n);
  for(int i=0;i<x;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
