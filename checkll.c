#include<stdio.h>
struct Node
{
    char data;
    struct Node* next;
};
struct Node* top;

void balanced(char c[],int n)
{
   if(n%2!=0)
    {
        printf("unbalanced paranthesis");
        return;
    }
    int i=0;
    while(i < n)
    {

    if(c[i]=='{'||c[i]=='('||c[i]=='[')
        push(c[i]);
    else if(c[i]=='}'||c[i]==')'||c[i]==']')
    {
        if(top == NULL)
            {printf("wrong operation\n");break;}
        else if(c[i] == '}' && top->data != '{')
            {printf("wrong operation\n");break;}
        else if(c[i] == ']' && top->data != '[')
            {printf("wrong operation\n");break;}
        else if(c[i] == ')' && top->data != '(')
            {printf("wrong operation\n");break;}
        else
            pop();
    }
    i++;
    }
    if(top == NULL)
        printf("balanced paranthesis");
    else
        printf("unbalanced paranthesis");

}

void push(char c)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = c;
    temp->next = top;
    top = temp;
}

void pop()
{
    struct Node* temp2 = top;
    top = top->next;
    free(temp2);
}

void main()
{
    top = NULL;
    char c[50];
    printf("enter paranthesis\n");
    gets(c);
    balanced(c,strlen(c));
}
