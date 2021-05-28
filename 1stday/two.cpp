#include<bits/stdc++.h>
using namespace std;
int max(int a,int b){
  if(a>b){
    return a;
  }
  else
    return b;
}
int maxdepth(string st){
  string:: iterator it;
  int curr=0;
  int mdepth=0;
  for(it = st.begin();it!=st.end();it++){
    if(*it == '('){
        curr++;
        mdepth = max(mdepth,curr);
    }
    else if(*it ==')'){
      curr--;
    }
  }
  return mdepth;
}
int main(){
  string str;
  cin>>str;
  int max=maxdepth(str);
  cout<<max<<endl;
}