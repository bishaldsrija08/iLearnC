#include <stdio.h>
int sum(int a, int b);
void printTable(int n);
int main()
{
    int a, b;
    printTable(5);
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    int result = sum(a, b);
    printf("The sum is: %d\n", result);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

void printTable(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}