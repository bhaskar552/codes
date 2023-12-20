#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*start,*tail;
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
        if(start==NULL)
        {
            start=ptr;
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
    if(start==NULL)
    {
        printf("\n LIST IS EMPTY");
        return;
    }
    struct node *temp;
    temp=start;
    while(temp!=NULL)
    {
        printf(" %d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL \n");
}
void delete()
{
  int k,c=0;
  printf("enter the divisible number ");
  scanf("%d",&k);
  struct node *temp,*ptr;
  temp=start;
  if(((temp->data)%k)==0)
  {
    c++;
    start=start->next;
    free(temp);
    temp=start;
  }
  ptr=temp->next;
  while(ptr!=NULL)
  {
    if(((ptr->data)%k)==0)
    {
      c++;
      if(ptr!=tail)
      {
        temp->next=temp->next->next;
        free(ptr);
        ptr=temp->next;
      }
      else
      {
        temp->next=NULL;
        free(ptr);
        tail=temp;
      }
    }
    else
    {
      temp=temp->next;
      ptr=ptr->next;
    }
  }
  if(c>0)
  printf("\n the modified list after removing all the numbers divisible by %d are \n",k);
  else
  printf("\n no number found in list which is divisible by %d \n",k);
}
int main()
{
  int n;
  printf("enter the nodes you want");
  scanf("%d",&n);
  createlist(n);
  printlist();
  delete();
  printlist();
  return 0;
}
