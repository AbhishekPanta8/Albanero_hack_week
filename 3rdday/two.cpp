#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *next;
};

void swapAdjacent(struct node *start){
  struct node *temp = start;
  while(temp != NULL && temp->next != NULL){
    swap(temp->data,temp->next->data);
    temp=temp->next->next;
  }
}

struct node * CreateNode(int value){
  struct node *temp=new node;
  temp->data=value;
  temp->next =NULL;
  return temp;
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
  cout<<"linkedlist before swapping Adjacent elements:"<<endl;
  display(start);
  swapAdjacent(start);
  cout<<"\nlinkedlist after swapping Adjacent elements:"<<endl;
  display(start);
  return 0;
}
