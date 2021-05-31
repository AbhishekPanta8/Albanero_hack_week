#include<bits/stdc++.h>
using namespace std;

int largeSum(int *arr,int n)
{
  int curr_sum=0,best_sum=0;
  for(int i=0;i<n;i++)
  {
    curr_sum=curr_sum+arr[i];
    if(best_sum < curr_sum)
      best_sum=curr_sum;
    if(curr_sum <0)
      curr_sum=0;
  }
  return best_sum;
}

int main()
{
  int n;
  cout<<"Enter the no.of elements in an array:"<<endl;
  cin>>n;
  int *arr = new int[n];
  int x;
  cout<<"Enter the elements in the array."<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int large=largeSum(arr,n);
  cout<<"largest sum of contagious sub-array is: "<<large;
  return 0;
}