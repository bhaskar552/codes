#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
void add(struct node **head,struct node **tail)
{
  struct node *newnode;
  int value,n=1;

  do
  {
     printf("\n ENTER THE VALUE ");
     scanf("%d",&value);
     newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=value;
     newnode->next=NULL;
    if(*head==NULL)
    {
      *head=newnode;
      *tail=newnode;
    }
    else
    {
      (*tail)->next=newnode;
      *tail=newnode;
    }
    printf("press 0 to discontinue");
    scanf("%d",&n);
  }while(n);
}
void display(struct node *temp)
{
  if(temp==NULL)
  {
    printf("\n list empty");
    return;
  }
  while(temp!=NULL)
  {
      printf(" %d -> ",temp->data);
      temp=temp->next;
  }
  printf("NULL");
}
struct node *merge(struct node *a,struct node *b)
{
  struct node dummy;
  struct node *tail=&dummy;
  while(a!=NULL && b!=NULL)
  {
    if(a->data < b->data)
    {
      tail->next=a;
      a=a->next;
      tail=tail->next;
    }
    else
    {
      tail->next=b;
      b=b->next;
      tail=tail->next;
    }
  }
  while(a!=NULL)
  {
    tail->next=a;
    a=a->next;
    tail=tail->next;
  }
  while(b!=NULL)
  {
    tail->next=b;
    b=b->next;
    tail=tail->next;
  }
  return dummy.next;
}
int main()
{
  struct node *head=NULL,*tail=NULL,*head1=NULL,*tail1=NULL;
  add(&head,&tail);
  printf("\n Displaying the first linked list");
  display(head);
  add(&head1,&tail1);
  printf("\n Displaying the second linked list");
  display(head1);
  struct node *newhead=merge(head,head1);
  display(newhead);
  return 0;

}
