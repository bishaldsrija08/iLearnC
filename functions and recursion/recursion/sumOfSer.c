#include <stdio.h>
int sumOfSeries(int n);
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int sum = sumOfSeries(n);
    printf("Sum of series from 1 to %d is: %d\n", n, sum);
    return 0;
}

int sumOfSeries(int n)
{
    if (n <= 0)
        return 0;
    return n + sumOfSeries(n - 1);
}