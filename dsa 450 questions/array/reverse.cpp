#include<iostream>
using namespace std;
int main ()
{
  int ar[100],i,n;
  cout<<"enter the no of elements you want \n";
  cin>>n;
  for(i=0;i<n;i++)
  {
    cout<<"enter the number "<<i+1<<" element \n";
    cin>>ar[i];
  }
  int k=n-1,temp;
  for(i=0;i<n/2;i++)
  {
    temp=ar[i];
    ar[i]=ar[k];
    ar[k]=temp;
    k--;
  }
  cout<<"the reversed array is \n";
  for(i=0;i<n;i++)
  {
    cout<<ar[i]<<" ";
  }
  return 0;
}
