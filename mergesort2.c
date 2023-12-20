#include<stdio.h>
#include<conio.h>
void merge(int A[],int lb,int mid,int ub);
void mergesort(int A[],int lb,int ub)
{
  if(lb<ub)
  {
    int mid=(lb+(ub-1))/2;
    mergesort(A,lb,mid);
    mergesort(A,mid+1,ub);
    merge(A,lb,mid,ub);
  }
}
void merge(int A[],int lb,int mid,int ub)
{
  int b[100];
  int i=lb;
  int j=mid+1;
  int k=lb;
  while(i<=mid&&j<=ub)
  {
    if(A[i]<=A[j])
    {
      b[k]=A[i];
      i++;
      k++;
    }
    else
    {
      b[k]=A[j];
      j++;
      k++;
    }
  }
  if(i>mid)
  {
    while(j<=ub)
    {
      b[k]=A[j];
      j++;
      k++;
    }
  }
  else
  {
    while(i<=mid)
    {
      b[k]=A[i];
      i++;
      k++;
    }
  }
for(int c=0;c<=100;c++)
{
  printf("%d ",b[c]);
}
}
int main()
{
  int n;
  printf("enter the number of elemnts you want");
  scanf("%d",&n);
  int arr[n];
  for (int i=0;i<n;i++)
  {
    printf("enter the element no %d => ",i+1);
    scanf("%d",&arr[i]);
  }
int size = sizeof(arr) / sizeof(arr[0]);

mergesort(arr, 0, size - 1);


}
