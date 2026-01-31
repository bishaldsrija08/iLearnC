// Write a program to find the greatest of two numbers using the conditional operator.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    a>b? printf("%d is greater than %d.\n", a, b) : printf("%d is greater than %d.\n", b, a);
    return 0;
}