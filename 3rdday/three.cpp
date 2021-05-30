#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *next;
};
void  reOrder(struct node *start){
  stack<struct node*> S;
  struct node* temp=start;
  while(temp!=NULL){
    S.push(temp);
    temp=temp->next;
  }
  temp=start;
  int sz= S.size();
  if(sz<=2)
    return;
  for(int i=0;i<sz/2;i++){
    struct node* next = temp->next;
    temp->next = S.top();
    S.pop();
    temp=temp->next;
    temp->next=next;
    temp=temp->next;
  }
  temp->next =NULL;
}

struct node * CreateNode(int value){
  struct node *newnode=new node;
  newnode->data=value;
  newnode->next =NULL;
  return newnode;
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
  cout<<"\nlinkedlist before reordering"<<endl;
  display(start);
  reOrder(start);
  cout<<"\nlinkedlist after reordering"<<endl;
  display(start);
  return 0;
}
