#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
}*top;
void push()
{
  struct node *ptr;
  int ele;
  int n=1;
  do
  {
    printf("enter the element you want to enter");
    scanf("%d",&ele);
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=ele;
    if(top==NULL)
    {
      ptr->next=NULL;
      top=ptr;
    }
    else
    {
      ptr->next=top;
      top=ptr;
    }
    printf("press 0 to discontinue");
    scanf("%d",&n);
  }while(n);
  menu();
}
void pop()
{
  struct node *temp;
  temp=top;
  if(top==NULL)
  {
    printf("stack empty");
  }
  else
  {
    top=top->next;
    temp->next=NULL;
    free(temp);
  }
  menu();
}
void display()
{
  struct node *temp;
  temp=top;
  if(top==NULL)
  {
    printf("stack empty");
    return;
  }
  while(temp!=NULL)
  {
    printf("%d ->",temp->data);
    temp=temp->next;
  }
  printf("NULL \n");
  menu();
}
void isempty()
{
  if(top==NULL)
  printf("the stack is empty");
  else
  printf("stack is not empty");
  menu();
}
void menu()
{
  int n;
  printf("1.add node \n");
  printf("2. delete \n");
  printf("3. display \n");
  printf("4. IS EMPTY ?\n");
  printf("5. exit \n");
  printf("enter your choice \n ");
  scanf("%d",&n);
  switch(n)
  {
    case 1:
    push();
    break;
    case 2:
    pop();
    break;
    case 3:
    display();
    break;
    case 4:
    isempty();
    break;
    case 5:
    exit(0);
    break;
    default:
    printf("wrong choice");
  }
}
int main()
{
  menu();
  return 0;
}
