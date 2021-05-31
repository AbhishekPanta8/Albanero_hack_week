#include<bits/stdc++.h>
using namespace std;
bool detEqu(int arr[]){
  int a=arr[0];
  int b=arr[1];
  int sum1=0,sum2=0;
  while(a!=0 || b!=0){
    sum1+=a%10;
    a=a/10;
    sum2+=b%10;
    b=b/10;
  }
  return (sum1==sum2) ? true : false;
}
int main(){
  int arr[2];
  bool x;
  cout<<"Enter the two numbers in an array"<<endl;
  for(int i=0;i<2;i++){
    cin>>arr[i];
  }
  x=detEqu(arr);
  if(x)cout<<"true"<<endl;
  else cout<<"false"<<endl;
  return 0;
}