#include <stdio.h>
#include <math.h>
int main()
{
    int a = 10;
    int b = 20;
    int sum = a + b; // a is operand and + is operator
    int rem = a % b; // % is modulus operator
    int power = pow(4, 2);
    printf("Sum of %d and %d is %d.\n", a, b, sum);
    printf("4 raised to the power 2 is %d.\n", power);
    printf("Remainder when %d is divided by %d is %d.\n", a, b, rem);
    printf("Multiplication is %f", 2 * 2.1);
    return 0;
}