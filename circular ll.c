#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
}*head,*tail;
void createlist(int n)
{
  struct node *new;
  int value;
  for(int i=1;i<=n;i++)
  {
    value=1;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=value;
    new->next=NULL;
    if(head==NULL)
    {
      head=new;
      tail=new;
    }
    else
    {
      tail->next=new;
      tail=new;
    }
    tail->next=head;
  }
}
void josephus(int m)
{
  struct node *temp;
  int count,i;
  printf("enter the counting no");
  scanf("%d",&count);
  for(i=1;i<count-1;i++)
  {

  }



}
