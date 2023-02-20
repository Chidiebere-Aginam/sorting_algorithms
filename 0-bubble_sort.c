// C program for implementation of Bubble sort 
#include <stdio.h> 

  

void swap(int* xp, int* yp) 
{ 

    int temp = *xp; 

    *xp = *yp; 

    *yp = temp; 
} 

  
// A function to implement bubble sort 

void bubble_sort(int array[], int n) 
{ 

    int i, j; 

    for (i = 0; i < n - 1; i++) 

  

        // Last i elements are already in place 

        for (j = 0; j < n - i - 1; j++) 

            if (array[j] > array[j + 1]) 

                swap(&array[j], &array[j + 1]); 
} 

  
