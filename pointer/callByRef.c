#include<stdio.h>
void square(int n);
void _square(int *n);
int main(){
    int num = 6;
    square(num);
    printf("Square outside function: %d\n", num);
    _square(&num);
    printf("Square outside function using call by reference: %d\n", num);
    return 0;
}

void square(int n){
    n = n * n;
    printf("Square inside function: %d\n", n);
}

void _square(int *n){
    *n = (*n) * (*n);
    printf("Square inside function using call by reference: %d\n", *n);
}