#include<stdio.h>
int main(){
    int n;
    do{
        printf("Enter a number: ");
        scanf("%d",&n);
        if(n%3==0){
            break;
        }
    }while(1);
    printf("You entered a multiple of 3: %d\n", n);
    return 0;
}