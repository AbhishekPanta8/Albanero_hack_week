#include<bits/stdc++.h>
using namespace std;
int* counAndSum(int arr[],int n){
  int *arr3 = new int[2];
  int sum=0;
  int count=0;
  for(int i=0;i<n;i++){
    if(arr[i]>0){
      count++;
    }
    else if (arr[i]<0){
      sum+=arr[i];
    }
  }
  arr3[0]=count;
  arr3[1]=sum;
  return arr3;
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
  int *arr2 = new int[2];
  cout<<"Enter the elements in the array."<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  arr2 = counAndSum(arr,n);
  cout<<"There are: "<<arr2[0]<<" positive numbers"<<endl;
  cout<<"sum of negative numbers is: "<<arr2[1]<<endl;
  return  0;
}
