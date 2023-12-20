#include <stdio.h>
#include <stdlib.h>

struct node
{
    int a;
    struct node *next;
};

void generate(struct node **,int size);
void display(struct node*);
void delete(struct node **);

int main()
{
    int size;
    struct node *head = NULL;

    printf("Enter size of linked list to generate :: ");
    scanf("%d",&size);
    generate(&head,size);
    printf("\nThe Linked List Generated is :: \n\n");
    display(head);
    printf("\n\n...........Deleting all nodes of the Generated Linked List.......\n");
    delete(&head);
    printf("\nDeletion of all nodes of Linked List is successful !!!!\n");

    return 0;

}

void generate(struct node **head,int size)
{
    int i;
    struct node *temp;

    for (i = 0; i < size; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->a = i;
        if (*head == NULL)
        {
            *head = temp;
            (*head)->next = NULL;
        }
        else
        {
            temp->next = *head;
            *head = temp;
        }
    }
}

void display(struct node *head)
{
  if (head->next == NULL)
  {
      return;
  }
    printf("%d    ", head->a);

    display(head->next);
}

void delete(struct node **head)
{
    struct node *temp;
    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}
