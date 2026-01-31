// WAP to check whether a number is armstrong number or not
#include<stdio.h>
int main(){
    int num, og, rem, sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    og = num;
    while(num!=0){
        rem = num % 10;
        sum += rem * rem * rem;
        num/=10;
    }
    printf("Sum of cubes of digits: %d\n", sum);
    if (sum == og){
        printf("%d is an Armstrong number\n", og);
    }
    else{
        printf("%d is not an Armstrong number\n", og);
    }
    return 0;
}