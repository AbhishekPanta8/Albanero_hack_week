#include<bits/stdc++.h>
using namespace std;
int * mulNext(int arr[],int n){
  if(n==1)
    return arr;
  int *mul = new int[n];
  for(int i=0;i<n;i++){
    int res=1;
    for(int j=0;j<n;j++){
      if(j==i)
        continue;
      else
      {
        res = res * arr[j];
      }
    }
    mul[i]=res;
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
  arr2= mulNext(arr,n);
  cout<<"Elements after multiplication is:"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr2[i]<<" ";
  }
}