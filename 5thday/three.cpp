#include<iostream>
using namespace std;
 
struct node
{
  int row;
  int col;
  int value;
  struct node *next;
};
 
void CreateNode(struct node **head, int ri,int ci, int data)
{
  struct node *ptr = *head;
  struct node *sp;
  if (ptr == NULL)
  {
    ptr = new node;
    ptr->row = ri;
    ptr->col = ci;
    ptr->value = data;
    ptr->next = NULL;
    *head = ptr;
  }
  else
  {
    while (ptr->next != NULL) {
      ptr = ptr->next; 
    }   
    sp = new node;
    sp->row = ri;
    sp->col = ci;
    sp->value = data;
    sp->next = NULL;
    ptr->next = sp;
  }
}
void display(struct node *start)
{
  struct node *ptr = start;
  cout << "row:"<<endl;
  while (ptr != NULL)
  {
    cout << ptr->row << " ";
    ptr = ptr->next;
  }
  cout << endl;
  cout << "column:"<<endl;
  ptr = start;
  while (ptr != NULL)
  {
    cout << ptr->col << " ";
    ptr = ptr->next;
  }
  cout << endl;
  cout << "Value:"<<endl;
  ptr = start;
  while (ptr != NULL)
  {
    cout << ptr->value << " ";
    ptr = ptr->next;
  }
}

int main()
{
  int matrix[4][4] = { { 1, 0 ,0 ,0},{ 0, 5, 0 ,2 },{ 3 ,0 ,0 ,0 },{ 0, 0 ,4 ,0 } };    
  struct node *head = NULL;
  for(int i = 0; i < 4; i++)
  {
    for(int j = 0; j < 4; j++)
    {
      if (matrix[i][j] != 0)
        CreateNode(&head, i, j,matrix[i][j]);
    }
  }
  cout<<"Sparse matrix representation of above matrix is:"<<endl;
  display(head);
  return 0;
}