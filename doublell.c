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
void iter()
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
int main()
{
  int n;
  printf("enter the nodes you want");
  scanf("%d",&n);
  create_list(n);
  iter();
  return 0;

}
