/****************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Insertion sort in C

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<time.h>


void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
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
void bubbleSort(int array[], int size) {


  for (int step = 0; step < size - 1; ++step) {


    for (int i = 0; i < size - step - 1; ++i) {


      if (array[i] > array[i + 1]) {


        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}
void DecendingbubbleSort(int array[], int size) {


  for (int step = 0; step < size - 1; ++step) {


    for (int i = 0; i < size - step - 1; ++i) {


      if (array[i] < array[i + 1]) {


        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}


int main() {
    int n=500;
  int data[n];
  double bcbs,wcbs,bcis,wcis;
  for(int i=0;i<n;i++){
        int num = rand();
       data[i]=num;
  }
      insertionSort(data,500);
      float start = clock();
      insertionSort(data,500);
      float end =clock();
  double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  bcis=cpu_time_used;
  DecendinginsertionSort(data,500);
  float start2 = clock();
  insertionSort(data,500);
  float end2 =clock();
double cpu_time_used1 = ((double) (end2 - start2)) / CLOCKS_PER_SEC;
wcis=cpu_time_used1;
bubbleSort(data,500);
float start3 = clock();
bubbleSort(data,500);
float end3 =clock();
double cpu_time_used2 = ((double) (end3 - start3)) / CLOCKS_PER_SEC;
bcbs=cpu_time_used2;
DecendingbubbleSort(data,500);
float start4 = clock();
bubbleSort(data,500);

float end4 =clock();
double cpu_time_used3 = ((double) (end4 - start4)) / CLOCKS_PER_SEC;
wcbs=cpu_time_used3;
printf("INSERTION SORT BEST %f WORST %f",bcis,wcis);
printf("\n");
printf("SELECTION SORT BEST %f WORST %f",bcbs,wcbs);
















}
