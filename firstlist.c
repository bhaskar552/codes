#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
}*head,*tail;1
void createlist()
{
  struct node *new;
  int value,n=1;

  do
  {
     printf("ENTER THE VALUE ");
     scanf("%d",&value);
     new=(struct node*)malloc(sizeof(struct node));
     new->data=value;
     new->next=NULL;
    if(head==NULL)
    {
      head=new;
      tail=new;
    }
    else
    {
      tail->next=new;
      tail=new;
    }
    printf("press 0 to discontinue");
    scanf("%d",&n);
  }while(n);
  menu();
}
void addlist()
{
  int a;
    printf("\n 1.ENTER AT BEGINING");
    printf("\n 2.ENTER AT END");
    printf("\n 3.ENTER AT SPECIFIED POSITION");
    printf("\n ENTER YOUR CHOICE");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        {
        struct node *new;
        int value;
        printf("\n enter the value you want to add");
        scanf("%d",&value);
        new=(struct node*)malloc(sizeof(struct node));
        new->data=value;
        new->next=head;
        head=new;
        printlist();
        }
        break;
        case 2:
        {
        struct node *new;
        int value;
        printf("\n enter the value you want to add");
        scanf("%d",&value);
        new=(struct node*)malloc(sizeof(struct node));
        new->data=value;
        new->next=NULL;
        tail->next=new;
        tail=new;
        printlist();
        }
        break;
        case 3:
        {
        struct node *temp,*new;
        int value,pos;
        printf("\n enter the value you want to add");
        scanf("%d",&value);
        printf("\n enter the position where you want to add element");
        scanf("%d",&pos);
        temp=head;
        new=(struct node*)malloc(sizeof(struct node));
        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        new->data=value;
        new->next=temp->next;
        temp->next=new;
        printlist();
        }
        break;
        default:
        printf("wrong choice try again !!!!");
    }
menu();

}
void reverse()
{
  struct node *current,*next,*prev=NULL;
  current=head;
  tail=head;
  while(current!=NULL)
  {
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
  }
  head=prev;
  printlist();
  menu();
}
void printlist()
{
    if(head==NULL)
    {
        printf("\n LIST IS EMPTY");
        menu();
    }
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf(" %d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL");
    menu();
}
void menu()
{
  int n;
  printf("\n 1.CREATE LIST");
  printf("\n 2.ADD NODE ");
  printf("\n 3.DISPLAY");
  printf("\n 4.REVERSE THE LIST");
  printf("\n 5.EXIT");
  printf("\n ENTER YOUR CHOICE");
  scanf("%d",&n);
  switch(n)
  {
    case 1:
    createlist();
    break;
    case 2:
    addlist();
    break;
    case 3:
    printlist();
    break;
    case 4:
    reverse();
    case 5:
    exit(0);
    default:
    printf("wrong choice");

  }

}
int main()
{
  menu();
  return 0;
}
