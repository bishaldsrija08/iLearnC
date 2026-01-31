// Program to check if a number is a natural number
#include<stdio.h>
int main(){
    int num;
    printf("Enter a natural number: ");
    scanf("%d", &num);
    if (num>0){
        printf("%d is a natural number.\n", num);
    }else{
        printf("%d is not a natural number.\n", num);
    }
    return 0;
}