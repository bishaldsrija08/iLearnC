// Write a program to check whether a given integer is a two-digit number or not using conditional operator.
#include<stdio.h>
int main(){
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    int isGreater = x>9 && x<100;
    isGreater? printf("%d is a two-digit number.\n", x) : printf("%d is not a two-digit number.\n", x);
    return 0;
}