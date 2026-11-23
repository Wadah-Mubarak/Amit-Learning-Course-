/*Requirements
Write a program that asks you to enter a value of a variable int x.  
Pass the address of x to a function called edit.  
Increment the value of x by 1 inside the function.  
Print the value of x in the main function before and after calling the function edit.  
Example
Enter the value of x
20
Before calling edit x = 20
After calling edit x = 21
*/

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
