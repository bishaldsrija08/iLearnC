#include <stdio.h>
void doWork(int a, int b, int *sum, int *diff, int *avg);
int main()
{
    int a = 10;
    int b = 5;
    int sum;
    int diff;
    int avg;
    doWork(a, b, &sum, &diff, &avg);
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Average: %d\n", avg);
    return 0;
}

void doWork(int a, int b, int *sum, int *diff, int *avg)
{
    *sum = a + b;
    *diff = a - b;
    *avg = *sum / 2;
}