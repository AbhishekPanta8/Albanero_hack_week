#include<bits/stdc++.h>
using namespace std;
int EvenEleSum(int **arr,int r,int c){
  int sum=0;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      if(arr[i][j]%2==0){
        sum+=arr[i][j];
      }
    }
  }
  return sum;
}
int main(){
  int r,c;
  cout<<"Enter the value of r and c"<<endl;
  cin>>r>>c;
  int **arr = new int*[r];
  for(int i=0;i<r;i++)
     arr[i]= new int[c];
  cout<<"Enter the elements in the matrix"<<endl;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin>>arr[i][j];
    }
  }
  int val = EvenEleSum(arr,r,r);
  cout<<"Total Sum of the given matrix is:"<<val<<endl;
  return 0;
}