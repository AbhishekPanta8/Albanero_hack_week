#include<bits/stdc++.h>
using namespace std;
int* sort_arr(int arr[],int n){
  int *arr3 = new int[n];
  arr3=arr;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
     if(arr[i]>arr[j]){
        int temp= arr3[i];
        arr3[i]=arr3[j];
        arr3[j]=temp;
     }
    }
  }
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
  int *arr2 = new int[n];
  cout<<"Enter the elements in the array."<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  arr2 = sort_arr(arr,n);
  cout<<"Elements after sorting the array is:"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr2[i]<<endl;
  }
  return  0;
}