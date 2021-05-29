#include<bits/stdc++.h>
using namespace std;
int findOne(int arr[][3],int r,int c){
  int flag=0;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      if(arr[i][j]==1){
        flag++;
      }
    }
  }
  return flag;
}
int main(){
  int arr[][3] = {{1, 1, 1}, {0, 0, 1}, {1, 1, 1}};
  int val = findOne(arr,3,3);
  cout<<"Total no. of 1's in given 2d array is: "<<val<<endl;
  return 0;
}