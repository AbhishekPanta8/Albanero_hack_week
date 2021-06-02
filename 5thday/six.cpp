#include<bits/stdc++.h>
using namespace std;
bool checkSentence(char str[]){
  int len=strlen(str);
  if (str[0] < 'A' || str[0] > 'Z')
    return false;
  if (str[len - 1] != '.')
    return false;
  for(int i=0;i<len;i++){
    if(str[i]==' '&& str[i+1]==' ')
      return false;
  }
  for(int i=1;i<len;i++)
  {
    if(((str[i] < 'a'||str[i] > 'z') && str[i]!=' '&& str[i]!='.' ))
      return false;
  }
  return true;
}
int main(){
  bool x;
  char str[] = {"This sentence is syntactically correct."};
  int n = sizeof(str) / sizeof(str[0]);
  int i = 0;
  x=checkSentence(str);
  if(x)cout<<"true"<<endl;
  else cout<<"false"<<endl;
  return 0;
}
