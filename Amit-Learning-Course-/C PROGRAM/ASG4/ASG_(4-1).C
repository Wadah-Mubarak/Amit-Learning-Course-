
#include <stdio.h>

void edit(int *ptr)
{
    *ptr = *ptr + 1;
}

int main()
{
    int x;

    printf("Enter the value of x\n");
    scanf("%d", &x);

    printf("Before calling edit x = %d\n", x);

    edit(&x);

    printf("After calling edit x = %d\n", x);

    return 0;
}
