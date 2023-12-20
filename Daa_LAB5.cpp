#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *a, int *b){
int t = *a;
*a = *b;
*b = t;
}

int partition(int arr[], int low, int high){
int p= arr[high];
int i = (low - 1);
for (int j = low; j <= high - 1; j++){
if (arr[j] < p){
i++;
swap(&arr[i], &arr[j]);
} }
swap(&arr[i + 1], &arr[high]);
return (i + 1);
}

void quickSort(int arr[], int low, int high){
if (low < high){
int p = partition(arr, low, high);
quickSort(arr, low, p - 1);
quickSort(arr, p + 1, high);
}
}
void printArray(int arr[], int size){
int i;
for (i = 0; i < size; i++)
printf("%d ", arr[i]);
printf("\n");
}

void iterative(int arr[],int n){
    int mx,mn,i;
    mx = arr[0];
    mn = arr[0];
    for(i=1; i<n; i++){
        if(arr[i]>mx)
        mx = arr[i];
        if(arr[i]<mn)
        mn = arr[i];
    }
}
void calculate(int n){
int *arr = malloc(n * sizeof(int));

for (int i = 0; i < n; ++i) {
int num = rand();
arr[i] = num; }

clock_t t;
double rt, bt;
t = clock();
iterative(arr,n);

 t = clock() - t;
bt = ((double)t) / CLOCKS_PER_SEC; t = clock();
quickSort(arr, 0, n - 1);
t = clock() - t;
rt = ((double)t) / CLOCKS_PER_SEC;
printf("The time for iterative method of array of size = %d is %f",n,bt);
printf("\n");
printf("The time for Divide & Conquer method of array of size = %d is %f",n,rt);
printf("\n");

}



int main(){
for (int i = 10000; i <= 15000; i += 500){
calculate(i);
printf("\n");
}

}
