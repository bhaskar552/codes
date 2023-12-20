#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head,*tail;
void createlist(int n)
{
    struct node *ptr;
    int data;
    for(int i=1;i<=n;i++)
    {
        ptr=(struct node*)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d",&data);
        ptr->data=data;
        ptr->next=NULL;
        if(head==NULL)
        {
            head=ptr;
            tail=ptr;
        }
        else
        {
            tail->next=ptr;
            tail=ptr;
        }

    }
}
void printlist()
{
    if(head==NULL)
    {
        printf("\n LIST IS EMPTY");
        return;
    }
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf(" %d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
void duplicate()
{
  struct node *temp,*ptr,*current;
  current=head;
  if(head==NULL)
    {
      printf("LIST IS EMPTY");
    }
  else
  {
    while(current!=NULL)
    {
      temp=current;
      ptr=current->next;
      while(ptr!=NULL)
      {
        if(current->data==ptr->data)
        {
          temp->next=ptr->next;
        }
        else
        {
          temp=ptr;
        }
        ptr=ptr->next;
      }
      current=current->next;
    }
  }

}
int main()
{
  int n;
  printf("enter the number of elements you want");
  scanf("%d",&n);
  createlist(n);
  printlist();
  duplicate();
  printf("\n the list after removing duplicate numbers is ");
  printlist();
  return 0;
}
