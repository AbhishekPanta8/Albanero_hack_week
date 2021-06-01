#include<bits/stdc++.h>
using namespace std;
vector<int> spiralTrav(int matrix[][5],int r,int c){
  int row=0;
  int col=0;
  vector<int> res;
  while(row < r && col <c){
    for(int i=row;i<c;i++){
      res.push_back(matrix[row][i]);
    }
    row++;
    for(int i=row;i<r;i++){
      res.push_back(matrix[i][c-1]);
    }
    c--;
    if(row<r){
      for(int i=c-1;i>=col;--i){
        res.push_back(matrix[r-1][i]);
      }
      r--;
    }
    if(col <c){
      for(int i=r-1;i>=row;--i){
        res.push_back(matrix[i][col]);
      }
      col++;
    }
  }
  return res;
}
int main(){
  int matrix[5][5] = { { 1  , 2  , 3 ,  4 , 5 },
                      { 16  ,17 , 18 , 19 , 6 },
                      { 15  ,24, 25 , 20 , 7 },
                      { 14  ,23  ,22  ,21,  8 },
                      { 13  ,12  ,11 , 10 , 9  } }; 
  vector<int> output;
  output= spiralTrav(matrix,5,5);
  for(int i=0;i<output.size();i++){
    cout<<output[i]<<" ";
  }
  return 0;
}