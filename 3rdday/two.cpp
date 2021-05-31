#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *next;
};

struct node* swapAdjacent(struct node *start){
 struct node *ptr1,*start2,*temp,*ptr2;
 if(start==NULL || start->next==NULL)
  return start;
 ptr1=start;
 start2=ptr1->next;
 while(1){
   ptr2=ptr1->next;
   temp=ptr2->next;
   ptr2->next=ptr1;
   if(temp==NULL || temp->next==NULL){
     ptr1->next =NULL;
     break;
   }
   ptr1->next=temp->next;
   ptr1=temp;
 }
 return start2;
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
