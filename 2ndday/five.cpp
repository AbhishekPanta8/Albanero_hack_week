#include<bits/stdc++.h>
using namespace std;
vector<int> even_ele(int arr[],int n){
  vector<int> arr3;
  for(int i=0;i<n;i++){
    if(arr[i]%2==0){
      arr3.push_back(arr[i]);
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
  vector<int> arr2;
  cout<<"Enter the elements in the array."<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  arr2 = even_ele(arr,n);
  cout<<"Even values in array are:"<<endl;
  for(int i=0;i<arr2.size();i++){
    cout<<arr2[i]<<endl;
  }
  return  0;
}