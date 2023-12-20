#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n;
  printf("enter the number of elements you want");
  scanf("%d",&n);
  int *p;
  int i=0;
  int a;

  p=(int*)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
  {

    printf("\n enter the element");
    scanf("%d",&a);
    *(p+i)=a;
  }
  for(int j=0;j<n;j++)
  {
    printf(" %d",*(p+j));
  }

  int k;
  printf("\n enter the kth no.");
  scanf("%d",&k);
  if(k>=n)
  {
    printf("\n NOT POSSIBLE");
  }
  else
  {
    int i,j,temp;
    for(i=0;i<(n-1);i++)
    {
      for(j=i+1;j<n;j++)
      {
        if(*(p+i)>*(p+j))
        {
          temp=*(p+i);
          *(p+i)=*(p+j);
          *(p+j)=temp;
        }
      }
    }
    for(int j=0;j<n;j++)
    {
      printf(" %d",*(p+j));
    }
    printf("\n the %d th smallest number is %d",k,*(p+k-1));
    printf("\n the %d th largest number is %d",k,*(p+n-1-k+1));
  }


  return 0;
}
