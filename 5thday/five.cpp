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
void removeDup(struct node *start){
  if(start == NULL)
    return ;
  struct node * curr = start;
  struct node * ptr;
  while(curr->next !=NULL){
    if(curr->data == curr->next->data){
      ptr = curr->next->next;
      free(curr->next);
      curr->next = ptr;
    }
    else
      curr = curr->next;
  }
}
void display(node *start){
  while (start != NULL)
  {
    cout<<start->data<<"->";
    start=start->next;
  }
}
int main(){
  struct node *start=CreateNode(12);
  start->next = CreateNode(15);
  start->next->next  = CreateNode(15);
  start->next->next->next  = CreateNode(17);
  start->next->next->next->next   = CreateNode(17);
  start->next->next->next->next->next   = CreateNode(19);
  cout<<"\nlinkedlist before removing duplicates is: "<<endl;
  display(start);
  removeDup(start);
  cout<<"\nlinkedlist after removing duplicates is: "<<endl;
  display(start);
  return 0;
}
