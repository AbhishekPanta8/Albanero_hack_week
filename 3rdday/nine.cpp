#include<bits/stdc++.h>
using namespace std;
int SquareDigit(int val){
  string res = "";
  int x=0;
  while (val != 0)
  {
    int digit = val % 10 ;
    x=digit*digit;
    res= to_string(x)+res;
    val = val/10 ;
  }
  return stoi(res);
}
int main(){
  int num,x;
  cout<<"Enter the value of digit:"<<endl;
  cin>>num;
  x=SquareDigit(num);
  cout<<"digit after squaring every digit is:"<<x<<endl;
  return 0;
}