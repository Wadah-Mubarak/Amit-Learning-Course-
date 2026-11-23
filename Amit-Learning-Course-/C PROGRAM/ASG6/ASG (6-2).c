
#include <stdio.h>

struct Complex
{
    float real;
    float imaginary;
};

int main()
{
    struct Complex num1, num2, sum;

    printf("For 1st complex number\n");
    printf("Enter real and imaginary part respectively:\n");

    scanf("%f", &num1.real);
    scanf("%f", &num1.imaginary);

    printf("For 2nd complex number\n");
    printf("Enter real and imaginary part respectively:\n");

    scanf("%f", &num2.real);
    scanf("%f", &num2.imaginary);

    sum.real = num1.real + num2.real;
    sum.imaginary = num1.imaginary + num2.imaginary;

    printf("Sum = %.1f + %.1fi\n", sum.real, sum.imaginary);

    return 0;
}
