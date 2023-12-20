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
void arrange(int k)
{
  struct node *temp;
  temp=head;
  int i,n;
  printf("\n enter the number from where you want rearrangement");
  scanf("%d",&n);
  if(n>k)
  {
    printf("NOT POSSIBLE");
  }
  else
  {
    for(i=1;i<n;i++)
    {
      temp=temp->next;
    }
    tail->next=head;
    head=temp->next;
    tail=temp;
    tail->next=NULL;

  }

}
int main()
{
  int n;
  printf("enter the number of elements you want");
  scanf("%d",&n);
  createlist(n);
  printlist();
  arrange(n);
  printlist();
  return 0;
}
