#include <stdio.h>

int main()
{
    int num, n, result;


    printf("Enter any number: ");
    scanf("%d", &num);

    // Ask which bit to toggle (0 to 31)
    printf("Enter nth bit to toggle (0-31): ");
    scanf("%d", &n);

    // Toggle the nth bit using the XOR bitwise operator
    result = num ^ (1U << n);

    // Display the original and modified numbers
    printf("Bit toggled successfully.\n\n");
    printf("Number before toggling %d bit: %d (in decimal)\n", n, num);
    printf("Number after toggling %d bit: %d (in decimal)\n", n, result);

    return 0;
}
