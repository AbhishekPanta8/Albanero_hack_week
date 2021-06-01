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

bool isPalindrome(struct node *start){
  struct node *slow,*fast ,*ptr1,*ptr2;
	fast = start;
	slow = start;
	if(fast->next == NULL)    
	{
		return true;
	}
	while(1)
	{
		fast = fast->next->next;
		if(fast == NULL)
		{
			ptr2 = slow->next;
			break;
		}
		if(fast->next == NULL)
		{
			ptr2 = slow->next->next;
			break;
		}		
		slow = slow->next;		
	}	
	slow->next = NULL;
	ptr2 = reversell(ptr2);	
	ptr1 = start;
	while(ptr1!=NULL && ptr2!=NULL)
	{		
		if(ptr1->data == ptr2->data)
		{
			ptr1 = ptr1->next;
			ptr2 = ptr2->next;
		}
		else
		{
			return false;				
		}		
	}	
	return true;
}
int main(){
  bool x;
  struct node *start=CreateNode(1);
  start->next = CreateNode(2);
  start->next->next  = CreateNode(3);
  start->next->next->next  = CreateNode(2);
  start->next->next->next->next   = CreateNode(1);
  x = isPalindrome(start);
  if(x)cout<<"true";
  else cout<<"false";
  return 0;
}