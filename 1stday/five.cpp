#include<bits/stdc++.h>
using namespace std;
int outliner(int arr[],int n){
  vector<int>a1;
  vector<int>a2;
  for(int i=0;i<n;i++){
    if(arr[i]%2==0){
      a1.push_back(arr[i]);
    }
    else{
      a2.push_back(arr[i]);
    }
  }
  return a1.size()==1 ? a1[0] : a2[0];
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
  int val=outliner(arr,n);
  cout<<"the outliner number is:"<<val;
}