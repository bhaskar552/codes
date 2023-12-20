#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
  struct node *prev;
}*head,*tail;
void create_list(int n)
{
  struct node *new;
  int a;
  for(int i=1;i<=n;i++)
  {
    printf("enter the value \n");
    scanf("%d",&a);
    new=(struct node*)malloc(sizeof(struct node));
    new->data=a;
    new->next=NULL;
    new->prev=NULL;
    if(head==NULL)
    {
      head=new;
      tail=new;
    }
    else
    {
      tail->next=new;
      new->prev=tail;
      tail=new;
    }

  }

}
void search()
{
  struct node *temp;
  int a,c=0;
  temp=head;
  printf("\n enter the no you want to search");
  scanf("%d",&a);
  while(temp!=NULL)
  {
    if(temp->data==a)
      c++;
    temp=temp->next;
  }
  if(c>0)
  {
    printf("your element found %d times",c);
  }
  else
  {
    printf("not found");
  }
}
void printlist()
{
  {
    struct node *temp;
    temp=head;
    if(head==NULL)
    {
      printf("list is empty");
      return;
    }
    printf("displaying through itrative method");
    while(temp!=NULL)
    {
      printf(" %d -> ",temp->data);
         temp = temp->next;
    }
    printf("NULL");
  }
}
int main()
{
  int n;
  printf("enter the nodes you want");
  scanf("%d",&n);
  create_list(n);
  printlist();
  search();

}
