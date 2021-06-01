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
struct node * reversell(struct node *start){
  if(start == NULL || start->next == NULL)
    return NULL;
  struct node * curr = start;
  struct node *prec = NULL;
  struct  node *succ = NULL;
  while(curr != NULL){
    succ = curr->next;
    curr->next = prec;
    prec = curr;
    curr = succ;
  }
  start = prec;
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
  cout<<"\nlinkedlist before reversing the nodes is: "<<endl;
  display(start);
  start = reversell(start);
  cout<<"\nlinkedlist after reversing the nodes is: "<<endl;
  display(start);
  return 0;
}
