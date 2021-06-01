#include<bits/stdc++.h>
using namespace std;
void FindTrip(int arr[],int n){
  unordered_set<int>tri;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      int sub= arr[j]-arr[i];
      if(tri.find(arr[i]-sub)!=tri.end()){
        cout<<arr[i]-sub<<" "<<arr[i]<<" "<<arr[j]<<endl;
      }
    }
    tri.insert(arr[i]);
  }
}
int main(){
  int n;
  cout<<"Enter the no.of elements in an array:"<<endl;
  cin>>n;
  int *arr = new int[n];
  cout<<"Enter the elements in the array."<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Triplets in AP from given array are:"<<endl;
  FindTrip(arr,n);
  return 0;
}