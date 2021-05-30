#include<bits/stdc++.h>
using namespace std;
bool sumTwo(int arr[],int no,int val){
  unordered_set<int> set1;
  for(int i=0;i<no;i++){
    int temp = val - arr[i];
    if(set1.find(temp)!=set1.end()){
      return true;
    }
    else{
      set1.insert(arr[i]);
    }
  }
  return false;
}

int main(){
  int n,sum;
  bool x;
  cout<<"Enter the no.of elements in an array:"<<endl;
  cin>>n;
  if(n==0)
  {
    cout<<"empty array";
    return 0;
  }
  int *arr = new int[n];
  cout<<"Enter the elements in the array."<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"enter the sum value"<<endl;
  cin>>sum;
  x=sumTwo(arr,n,sum);
  if(x)cout<<"true";
  else cout<<"false";
  return 0;
}