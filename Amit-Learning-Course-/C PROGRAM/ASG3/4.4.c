
#include <stdio.h>

int main()
{
    int i, j;
    int n = 5;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if ((i == 0 && (j == 1 || j == 2 || j == 3)) ||
                (i == 1 && (j == 0 || j == 4)) ||
                (i == 2) ||
                ((i == 3 || i == 4) && (j == 0 || j == 4)))
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
