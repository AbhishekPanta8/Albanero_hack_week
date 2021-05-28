#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"enter the total number of elements"<<endl;
  cin>>n;
  int *arr = new int[n];
  cout<<"enter the elements"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
  }
  if(sum%2==0 ){
    cout<<"even"<<endl;
  }
  else{
    cout<<"odd"<<endl;
  }

}