#include<bits/stdc++.h>
using namespace std;
int largesum(int arr[],int n,int k){
  for(int i=1;i<=k;i++){
    int min=INT_MAX;
    int index=-1;
    for(int j=0;j<n;j++){
      if(arr[j]<min){
        min=arr[j];
        index=j;
      }
    }
    if(min==0)
      break;
    arr[index]=-arr[index];
  }
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
  }
  return sum;
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
  cout<<"enter the value of k"<<endl;
  int a;
  cin>>a;
  int sum = largesum(arr,n,a);
  cout<<"the largest possible sum is: "<<sum<<endl;
  return 0;
}