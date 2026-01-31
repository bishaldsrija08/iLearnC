// WAP to check wheteher a number is divisible by 2 or not.

#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    num%2 ==0? printf("%d is divisible by 2\n", num) : printf("%d is not divisible by 2\n", num);
    return 0;
}