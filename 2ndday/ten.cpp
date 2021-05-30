#include<bits/stdc++.h>
using namespace std;
int maxTot(int arr[],int n){
  int sum=0;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
     if(arr[i]<arr[j]){
        int temp= arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
     }
    }
  }
  for(int i=0;i<5;i++){
    sum+=arr[i];
  }
  return sum;
}
int main(){
  int n,val;
  cout<<"enter the total number of elements"<<endl;
  cin>>n;
  int *arr = new int[n];
  cout<<"enter the elements"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  val = maxTot(arr,n);
  cout<<"the maximun total made is:"<<val<<endl;
  return 0;
}