#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int n,k;
    cout<<"enter the size of the array you want (maximum size 100)";
    cin>>n;
    cout<<"enter the kth element";
    cin>>k;
    for(int a=0;a<n;a++)
    {
        cout<<"enter the "<<a+1<<" no. element";
        cin>>arr[a];
    }
    for (int i = 0; i <= n-k; i++)
  {
      int max = arr[i];

      for (int j = 1; j < k; j++)
      {
          if (arr[i+j] > max)
             max = arr[i+j];
      }
      printf("%d ", max);
  }
}
