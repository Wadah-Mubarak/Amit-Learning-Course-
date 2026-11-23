/*
Requirements
Write a program to Reverse Array without Using another Array.  
Example
Original array:  1 2 3 4 5
Reverse of array: 5 4 3 2 1

*/
#include <stdio.h>

int main()
{
    int arr[5];
    int i, temp;

    // Enter array elements
    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Print original array
    printf("Original array: ");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    // Reverse the array
    for(i = 0; i < 5 / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }

    // Print reversed array
    printf("\nReverse of array: ");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
