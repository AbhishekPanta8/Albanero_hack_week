#include<bits/stdc++.h>
using namespace std;
void addone(int arr[],int n){
  for(int i=0;i<n;i++){
    arr[i]=arr[i]+1;
  }
  cout<<"array after addition of 1 in each index is:"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i];
  }
}
int main(){
  int n;
  cout<<"enter the total number of elements"<<endl;
  cin>>n;
  int *arr = new int[n];
  cout<<"enter the elements"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  addone(arr,n);
}