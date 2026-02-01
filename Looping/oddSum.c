#include<stdio.h>
int main(){
    int sum = 0;
    for(int i=5; i<=50; i++){
            sum += i;
    }
    printf("\nSum of odd numbers between 5 and 50 is %d\n", sum);
    return 0;
}