#include<stdio.h>
void bubble_sort(int arr[],int month[],int day[]);

int main(void)
{
    int day[5];
    int month[5];
    int year[5];

    for(int i = 0; i < 5; i++)
    {
        printf("enter date no %d= ", i+1);
        scanf("%d", &day[i]);
        printf("enter month no %d= ", i+1);
        scanf("%d", &month[i]);
        printf("enter year no %d= ", i+1);
        scanf("%d", &year[i]);





    }

    printf("\nUnsorted dates are: \n");

    for(int i = 0; i < 5; i++)
    {
        printf("\n %d,%d,%d ", day[i],month[i],year[i]);
    }

    bubble_sort(year,month,day);

    printf("\n\nSorted array: \n");

    for(int i = 0; i < 5; i++)
    {
      printf("\n %d/%d/%d ", day[i],month[i],year[i]);
    }

    return 0;
}


void bubble_sort(int arr[],int month[],int day[])
{
    int tmp,d,m;

      int is_swapped;

    for(int i = 0; i < 5; i++)
    {
        is_swapped = 0;

        for(int j = 0; j < 5- 1 - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                tmp = arr[j];
                d=day[j];
                m=month[j];
                arr[j] = arr[j+1];
                day[j]=day[j+1];
                month[j]=month[j+1];
                arr[j+1] = tmp;
                day[j+1]=d;
                month[j+1]=m;
                is_swapped = 1;
            }
        }

        if (!is_swapped)
        {
            break;
        }
    }
}
