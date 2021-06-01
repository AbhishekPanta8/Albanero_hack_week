#include<bits/stdc++.h>
using namespace std;
void freqCount(int arr[],int n){
  unordered_map<int,int> fc;
  for(int i=0;i<n;i++)
    fc[arr[i]]++;
  cout<<"Elements and their frequencies are:"<<endl;
  for(int i=0;i<n;i++){
    if(fc[arr[i]]!=-1){
      cout<<arr[i]<<"->"<<fc[arr[i]]<<endl;
      fc[arr[i]]=-1;
    }
  }
}
int main(){
  int n;
  cout<<"Enter the no.of elements in an array:"<<endl;
  cin>>n;
  int *arr = new int[n];
  int x;
  cout<<"Enter the elements in the array."<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  freqCount(arr,n);
  return 0;
}
