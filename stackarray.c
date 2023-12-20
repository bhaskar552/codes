#include<stdio.h>
int top=-1;
  int size;
  int stack[100];
void push()
{
  int ele;
  printf("enter the element you want to enter");
  scanf("%d",&ele);
  if(top==size-1)
  {
    printf("overflow");
  }
  else
  {
    top++;
    stack[top]=ele;
  }

}
void pop()
{
    int ele;
  if(top==-1)
  printf("underflow");
  else
  {
    ele=stack[top];
    printf("\n %d is being deleted",ele);
    top--;
  }
  menu();
}
void isempty()
{
  if(top==-1)
  {
    printf("stack is empty");
  }
  else
  printf(" STACK IS NOT EMPTY");
  menu();

}
void display()
{
  if(top!=-1)
  {
    for(int i=top;i>=0;i--)
    {
      printf("%d -> ",stack[i]);
    }
  }
  else
  printf("empty stack");
  menu();
}
void menu()
{
  int n;
  printf("\n 1.POP");
  printf("\n 2.DISPLAY");
  printf("\n 3.IS EMPTY OR NOT");
  printf("\n 4.EXIT");
  printf("\n ENTER YOUR CHOICE");
  scanf("%d",&n);
  switch(n)
  {
    case 1:
    pop();
    break;
    case 2:
    printf("DISPLAYING THE STACK\n");
    display();
    break;
    case 3:
    isempty();
    break;
    case 4:
    exit(0);
    break;
    default:
    printf("wrong choice");

  }

}
int main()
{

  printf("enter the number of element you want to have (not more than 100)");
  scanf("%d",&size);
  for(int i=0;i<size;i++)
  {
    push();
  }
  menu();
  return 0;
}
