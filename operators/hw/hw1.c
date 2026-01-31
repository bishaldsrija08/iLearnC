#include<stdio.h>
int main(){
    int a, b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b,&c);
    int average = (a + b + c) / 3;
    printf("The average is: %d\n", average);
    return 0;
}