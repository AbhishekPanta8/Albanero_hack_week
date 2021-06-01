#include<bits/stdc++.h>
using namespace std;
vector<float> maxArr(float arr[][4],int r,int c){
  vector<float> output;
  for(int i=0;i<r;i++){
    float max=arr[i][0];
    for(int j=0;j<r;j++){
      if(arr[i][j]>max)
        max=arr[i][j];
    }
    output.push_back(max);
  }
  return output;
}
int main(){
  float arr[][4] = {{0.4321, 0.7634, 0.652}, {1.324, 9.32, 2.5423, 6.4314}, {9, 3, 6, 3}};
  vector<float> val;
  val = maxArr(arr,3,4);
  cout<<"Array containing max elements of each of given arrays is:"<<endl;
  for(int i=0;i<val.size();i++){
    cout<<val[i]<<endl;
  }
  return 0;
}