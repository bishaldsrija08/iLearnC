#include<stdio.h>
int main(){
    int sum = 0;
    for(int i=1, j = 10; i<=10 && j>=1; i++, j--){
        printf("%d ", j);
        sum = sum +i;
    }
    printf("\n");
    printf("Sum = %d ", sum);
    return 0;
}