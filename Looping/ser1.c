#include<stdio.h>
int main(){
    int i=1, num;
    printf("Enter any number: ");
    scanf("%d",&num);
    while (i<=num)
    {
        printf("%d ",i);
        i++;
    }
    return 0;
}