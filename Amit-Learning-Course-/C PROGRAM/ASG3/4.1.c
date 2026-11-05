
#include <stdio.h>

int main()
{
    int i, j;
    int n = 5;

    // Outer loop controls rows
    for (i = 0; i < n; i++)
    {
        // Inner loop controls columns
        for (j = 0; j < n; j++)
        {
            // Print stars on both diagonals
            if (i == j || i + j == n - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
