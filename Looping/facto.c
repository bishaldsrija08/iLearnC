#include<stdio.h>
int main(){
    int facto = 1;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        facto = facto * i;
    }
    printf("Factorial of %d is %d\n", n, facto);
    return 0;
}