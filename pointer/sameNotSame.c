#include <stdio.h>
void printValue(int a);
void _printValue(int *a);
int main()
{
    int a = 5;
    // printf("Before function call: %u\n", &a);
    // printValue(a);
    _printValue(&a);
    printf("Before function call pointer: %u\n", &a);
    return 0;
}

void printValue(int a)
{
    printf("After function call: %u\n", &a);
}

void _printValue(int *a)
{
    printf("After function call pointer: %u\n", a);
}