#include<stdio.h>
void quicksort(float number[25],int first,int last){
   int i,pivot,j;
   float temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,(i+j)/2,j-1);
      quicksort(number,(j+1+last)/2,last);

   }
}

int main(){
   int i, count;
   float number[100];

   printf("How many elements are u going to enter?: ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);
   for(i=0;i<count;i++)
      scanf("%f",&number[i]);


   quicksort(number,(count/2),count-1);

   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %.2f",number[i]);

   return 0;
}
