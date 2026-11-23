/*
Requirements
Write a program that asks the user to enter 5 numbers and store it in an array called arr_1 using a for loop.
Then print the following:  
Print the 5 elements of arr_1.  
The maximum number in arr_1 and its position in the array.  
The minimum number in arr_1 and its position in the array.
*/
#include <stdio.h>

int main()
{
    int arr_1[5];
    int max, min;
    int max_pos, min_pos;
    int i;

    // Enter 5 numbers
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr_1[i]);
    }

    // Initialize max and min with the first element
    max = arr_1[0];
    min = arr_1[0];

    max_pos = 0;
    min_pos = 0;

    // Find maximum and minimum
    for(i = 1; i < 5; i++)
    {
        if(arr_1[i] > max)
        {
            max = arr_1[i];
            max_pos = i;
        }

        if(arr_1[i] < min)
        {
            min = arr_1[i];
            min_pos = i;
        }
    }

    // Print array elements
    for(i = 0; i < 5; i++)
    {
        printf("%d\t", arr_1[i]);
    }

    // Print maximum and minimum
    printf("\nThe maximum Number is %d in position %d\n", max, max_pos);

    printf("The minimum Number is %d in position %d\n", min, min_pos);

    return 0;
}
