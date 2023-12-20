#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<time.h>
int size = 0;
void swap(int *a, int *b)
{
  int temp = *b;
  *b = *a;
  *a = temp;
}
void DecendinginsertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;
    while (key >array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}
void heapify(int arr[], int n, int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && arr[l] > arr[largest])
    largest = l;
    if (r < n && arr[r] > arr[largest])
    largest = r;
    if (largest != i) {
    swap(&arr[i], &arr[largest]);
    heapify(arr, n, largest);
    }
}
void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
    heapify(arr, n, i);
    for (int i = n - 1; i > 0; i--)
    {
    swap(&arr[0], &arr[i]);
    heapify(arr, i, 0);
    }
}
void deleteRoot(int array[], int num)
{
  int i;
  for (i = 0; i < size; i++)
  {
    if (num == array[i])
      break;
  }

  swap(&array[i], &array[size - 1]);
  size -= 1;
  for (int i = size / 2 - 1; i >= 0; i--)
  {
    heapify(array, size, i);
  }
}
void printArray(int array[], int size)
{
  for (int i = 0; i < size; ++i)
    printf("%d ", array[i]);
  printf("\n");
}
void buildHeap(int arr[], int n) {
    int startIdx = (n / 2) - 1;
    for (int i = startIdx; i >= 0; i--)
    {
    heapify(arr, n, i);
   }
}
void fillRandom(int arr[], int n) {
    srand(0);
    for (int i = 0; i < n; i++)
    arr[i] = rand() % n;
}
int heap_extract_max(int arr[], int n) {
    if (n < 1)
    return -1;
    int max = arr[0];
    arr[0] = arr[n - 1];
    heapify(arr, n, 0);
    printArray(arr, n - 1);
    return max;

}
int main()
{
    int choice;
    int n;
    int arr[10000];

    do{
         printf("Enter your choice\n");
    printf("0 to Quit\n");
    printf("1. n Random numbers=>Array\n");
    printf("2. Display the array\n");
    printf("3. Sort the Array in Ascending Order by using Max-Heap Sort technique\n");
    printf("4. Sort the Array in Descending Order by using any algorithm\n");
    printf("5. Time Complexity to sort ascending of random data\n");
    printf("6. Time Complexity to sort ascending of data already sorted in ascending order\n");
    printf("7. Time Complexity to sort ascending of data already sorted in descending order\n");
    printf("8. Time Complexity to sort ascending all Cases (Data Ascending,Data in Descending & Random Data) in Tabular form for values n=5000 to 50000, step=5000\n");
    printf("9. Extract largest element\n");
    printf("10. Replace value at a node with new value\n");
    printf("11. Insert a new element\n");
    printf("12. Delete an element\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
        printf("Enter the value of n\n");
        scanf("%d",&n);
        fillRandom(arr,n);
        buildHeap(arr,n);
        break;
        }
        case 2:
        {
            printArray(arr,n);
            break;
        }
        case 3:
        {
            heapSort(arr,n);
            printArray(arr,n);
            break;
        }
        case 4:
        {
            DecendinginsertionSort(arr,n);
            printArray(arr,n);
            break;
        }
        case 5:
        {

            fillRandom(arr, n);
            clock_t start = clock();
            heapSort(arr, n);
            printf("Time taken to sort random data = %f \n", (double)(clock() - start) / CLOCKS_PER_SEC);
            break;

        }
        case 6:
        {
            fillRandom(arr, n);
            heapSort(arr, n);
            clock_t start = clock();
            heapSort(arr, n);
            printf("Time taken to sort already sorted data is = %f", (double) (clock() - start) / CLOCKS_PER_SEC);
            break;

        }
        case 7:
        {
            DecendinginsertionSort(arr, n);
            clock_t start = clock();
            heapSort(arr, n);
            printf("Time taken to sort already descending data is = %f", (double) (clock() - start) / CLOCKS_PER_SEC);
            break;

        }
        case 8:
        {
            break;

        }
        case 9:
        {
            buildHeap(arr, n);
            int max = heap_extract_max(arr, n);
            printf("Max element is %d\n", max);
            break;

        }
        case 10:
        {
            int index;
            printf("Enter index of value to be changed\n");
            scanf("%d", &index);
            printf("Enter new value\n");
            int num;
            scanf("%d", &num);
            arr[index] = num;
            buildHeap(arr, n);
            printArray(arr, n);
            break;
        }
        case 11:
        {
            int num;
            printf("Enter number to be inserted\n");
            scanf("%d", &num);
            printf(";-;\n");
            arr[n + 1] = num;
            buildHeap(arr, n + 1);
            printArray(arr, n + 1);
            break;
        }
        case 12:
        {
                 int index;
                printf("Enter index of element to delete\n");
                scanf("%d", &index);
                arr[index] = arr[index]+ 1;
                n--;
                buildHeap(arr, n);
                printArray(arr, n);
                break;

        }
    }

    }
    while(choice);



}
