#include<bits/stdc++.h>
using namespace std;
void toggleval(int **arr,int r,int c){
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      arr[i][j]=1-arr[i][j];
    }
  }
  cout<<"Value of 2d array after reversing the image is:"<<endl;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
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
  toggleval(arr,r,c);
  return 0;
}