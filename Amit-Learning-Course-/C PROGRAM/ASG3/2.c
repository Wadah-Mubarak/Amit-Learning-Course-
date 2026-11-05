
#include <stdio.h>

int main()
{
    unsigned int num;
    int count = 0;

    // Ask the user to enter an integer
    printf("Enter an integer number: ");
    scanf("%u", &num);

    // Count the number of ones in binary
    while (num > 0)
    {
        if (num & 1)
        {
            count++;
        }

        // Shift bits one position to the right
        num = num >> 1;
    }

    // Display the result
    printf("Number of ones in binary = %d\n", count);

    return 0;
}
