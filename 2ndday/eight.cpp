#include<bits/stdc++.h>
using namespace std;
vector<int> factors(int x){
  vector<int>fact;
  for(int i=1;i<=x;i++){
    if(x % i == 0){
      fact.push_back(i);
    }
  }
  return fact;
}
int main(){
  int n;
  cout<<"Enter the number to find the factorial of:"<<endl;
  cin>>n;
  vector<int>arr;
  arr=factors(n);
  cout<<"The factors of "<<n<<" are:"<<endl;
  for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}