#include<bits/stdc++.h>
using namespace std;
int * upMul(int arr[],int n){
  if(n==1)
    return arr;
  int *mul = new int[n];
  for(int i=0;i<n;i++){
    if(i==0)
      mul[i]=arr[i]*arr[i+1];
    else if(i!=n-1)
      mul[i]=arr[i-1]*arr[i+1];
    else
      mul[i]=arr[i-1]*arr[i];
  }
  return mul;
}
int main(){
  int n;
  cout<<"Enter the no.of elements in an array:"<<endl;
  cin>>n;
  int *arr = new int[n];
  int *arr2 = new int[n];
  int x;
  cout<<"Enter the elements in the array."<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  arr2= upMul(arr,n);
  cout<<"Elements after multiplication is:"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr2[i]<<" ";
  }
}