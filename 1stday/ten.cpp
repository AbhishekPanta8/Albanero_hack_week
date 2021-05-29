#include<bits/stdc++.h>
using namespace std;
vector<int> evenval(int arr[],int n){
  vector<int>a;
  for(int i=0;i<n;i++){
    if(arr[i]%2==0){
      a.push_back(arr[i]);
    }
  }
  return a;
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
  vector<int> output;
  output= evenval(arr,n);
  for(int i=0;i<output.size();i++){
    cout<<output[i]<<" ";
  }
  return 0;
}