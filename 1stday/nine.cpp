#include<bits/stdc++.h>
using namespace std;
int profit(int arr[],int n){
    int maxp=0;
    int minimal=INT_MAX;
    for(int i=0;i<n;i++){
      minimal=min(minimal,arr[i]);
      maxp=max(maxp,arr[i]-minimal);
    }
    return maxp;
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
  int maxprofit= profit(arr,n);
  cout<<"the maximum profit is : "<<maxprofit<<endl;
  return 0;
}