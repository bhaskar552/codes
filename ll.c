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
void addlist(int n)
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
        new->next=start;
        start=new;
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
        temp=start;
        new=(struct node*)malloc(sizeof(struct node));
        if(pos<0||pos>n)
        {
        printf("\n error cannot enter value because position greater than size\n");
        }
        else
        {
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
    printf("NULL");
}
void deletelist()
{
    int a;
    printf("\n 1.DELETE AT BEGINING");
    printf("\n 2.DELETE AT END");
    printf("\n 3.DELETE AT SPECIFIED POSITION");
    printf("\n 4.BACK TO MAIN MENU");
    printf("\n ENTER YOUR CHOICE");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        {
            struct node *temp;
            temp=start;
            start=start->next;
            temp->next=NULL;
            printlist();
        }
        break;
        case 2:
        {
            struct node *temp;
            temp=start;
            while(temp->next!=tail)
            {
                temp=temp->next;
            }
            temp->next=NULL;
            tail=temp;
            printlist();
        }
        break;
        case 3:
        {
            struct node *temp;
            temp=start;
            int pos;
            printf("\n enter the position from where yo want to delete node");
            scanf("%d",&pos);
            for(int i=1;i<pos-1;i++)
            {
                temp=temp->next;
            }
            temp->next=temp->next->next;
            printlist();
        }

        break;
        default:
        printf("wrong choice try again !!!!");

    }



}
void search()
{
  struct node *temp;
  int a,c=0;
  temp=start;
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
int main() {
    int n,ch;
    printf("enter the nodes you want");
    scanf("%d",&n);
    createlist(n);
    printf("\n 1.DISPLAY LIST");
    printf("\n 2.ADD NODE ");
    printf("\n 3.DELETE NODE");
    printf("\n 4.SEARCH");
    printf("\n ENTER YOUR CHOICE");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printlist();
        break;
        case 2:
        addlist(n);
        break;
        case 3:
        deletelist();
        break;
        case 4:
        search();
        break;
        default:
        printf("wrong choice try again!!!!");

    }

    return 0;
}
