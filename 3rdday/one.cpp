#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *next;
};
struct node * CreateNode(int value){
  struct node *newnode=new node;
  newnode->data=value;
  newnode->next =NULL;
  return newnode;
}
struct node * Groupoddeven(struct node *start){
  if(start == NULL)
    return NULL;
  struct node *odd = start;
  struct node * even = start->next;
  struct node *ptreven=even;
  while(1){
    if(!odd || !even || !(even->next)){
      odd->next = ptreven;
      break;
    }
    odd->next = even->next;
    odd = even->next;
    if(odd->next ==NULL){
      even->next = NULL;
      odd->next = ptreven;
      break;
    }
    even->next = odd->next;
    even=odd->next;
  }
  return start;
}
void display(node *start){
  while (start != NULL)
  {
    cout<<start->data<<"->";
    start=start->next;
  }
}
int main(){
  struct node *start=CreateNode(1);
  start->next = CreateNode(2);
  start->next->next  = CreateNode(3);
  start->next->next->next  = CreateNode(4);
  start->next->next->next->next   = CreateNode(5);
  cout<<"\nlinkedlist before arranging even and odd"<<endl;
  display(start);
  Groupoddeven(start);
  cout<<"\nlinkedlist after arranging even and odd"<<endl;
  display(start);
  return 0;
}
