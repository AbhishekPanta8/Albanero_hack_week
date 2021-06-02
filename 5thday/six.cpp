#include<bits/stdc++.h>
using namespace std;
 
bool checkSentence(char str[])
{
    
  int len = strlen(str);
  if (str[0] < 'A' || str[0] > 'Z')
    return false;
  if (str[len - 1] != '.')
    return false;
  int prev = 0, cur= 0;
  int i = 1;
  while (str[i])
  {
    if (str[i] >= 'A' && str[i] <= 'Z')
      cur= 0;
    else if (str[i] == ' ')
      cur= 1;
    else if (str[i] >= 'a' && str[i] <= 'z')
      cur= 2;
    else if (str[i] == '.')
      cur= 3;
    if (prev == cur && cur!= 2 )
      return false;
    if (prev == 2 && cur== 0)
      return false;
    if(prev == 1 && cur== 0)
      return false;
    if (cur== 3 && prev != 1)
      return (str[i + 1] == '\0');
    i++;
    prev = cur;
  }
  return false;
}

int main()
{
  bool x;
  char *str[] = {"This sentence is syntactically correct.","This is Syntactically correct."};
  int n = sizeof(str) / sizeof(str[0]);
  int i = 0;
  for(int i=0;i<n;i++){
    x=checkSentence(str[i]);
  if(x)cout<<"true"<<endl;
  else cout<<"false"<<endl;
  }
  return 0;
}