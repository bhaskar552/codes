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

}
int peeklowestelelment()
{
  int min=stack[0];
  for(int i=0;i<=top;i++)
  {
    if(stack[i]<min)
    min=stack[i];
  }
  return min;
}
int peekhighestelement()
{
  int max=stack[0];
  for(int i=0;i<size;i++)
  {
    if(stack[i]>max)
    max=stack[i];
  }
  return max;
}
int middleelement()
{
  return stack[(size/2)+1];
}
int main()
{

  printf("enter the number of element you want to have (not more than 100)");
  scanf("%d",&size);
  for(int i=0;i<size;i++)
  {
    push();
  }
  display();
  printf("\n THE LOWEST ELEMENT IS %d",peeklowestelelment());
  printf("\n THE HIGHEST ELEMENT IS %d",peekhighestelement());
  printf("\n THE MIDDLE ELEMENT IS %d",middleelement());


  return 0;
}
