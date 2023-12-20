#include<stdio.h>
#include<stdlib.h>
#include<string.h>
const int size=50;
char stack[50];
int top=-1;
void pop();
void push(char ch);
int main()
{
    int i,l=0,f=0;
    char str[100];
    printf("ENTER A STRING ");
    scanf("%s",str);
    printf("%s",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]=='('||str[i]=='['||str[i]=='{')
        {
            push(str[i]);
        }
        else if(str[i]==')'||str[i]==']'||str[i]||'}')
          {
            if(top==-1)
            {
             f=1;
             printf("1");
              break;
            }
            else if(str[i]=='}'&&stack[top]!='{')
              {
                  f=1;
                  printf("2");
                break;
              }
              else if(str[i]==']'&&stack[top]!='[')
                {
                    f=1;
                    printf("3");
                  break;
                }
                else if(str[i]==')'&&stack[top]!='(')
                  {
                      f=1;
                      printf("4");
                    break;
                  }
                  else
                    pop();
          }
          else
          continue;

    }
    if(top==-1)
    {
        printf("BALANCED");
    }
    else if(f==1||top>=0)
    {
      printf("UNBALANCED");
    }
}
void push(char ch)
{
    if(top!=size-1)
    {
        top++;
        stack[top]=ch;
        printf("%c",stack[top]);
    }
}
void pop()
{
  char ele;
    if(top==-1)
    printf("UNDERFLOW");
    else
    ele=stack[top];
    printf("%c",ele);
    top--;
}
