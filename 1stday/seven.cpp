#include<bits/stdc++.h>
using namespace std;
int longcontsub(int a[],int n,int k){
  int l=0;
  int res=0;
  int zerocount=0;
  for(int h=0;h<n;h++){
    if(a[h]==0){
      zerocount++;
    }
    while(zerocount > k){
      if(a[l]==0)
        zerocount--;
      l++;
    }
    res =max(res,h-l+1); 
  }
  return res;
}
int main(){
  int n,k;
  cout<<"enter the total number of elements"<<endl;
  cin>>n;
  int *arr = new int[n];
  cout<<"enter the total no.of k"<<endl;
  cin>>k;
  cout<<"enter the elements"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int val=longcontsub(arr,n,k);
  cout<<"The length of longest contigous subarray is:"<<val<<endl;
  return 0;
}