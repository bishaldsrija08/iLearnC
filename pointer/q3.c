// Write a function to calculate the sum, product & average of 2 numbers. Print that average in the main function.
#include<stdio.h>
void doSth(int a, int b, int *sum, int *product, int *average);
int main(){
    int a, b, sum, product, average;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    doSth(a, b, &sum, &product, &average);
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    printf("Average: %d\n", average);
    return 0;
}


void doSth(int a, int b, int *sum, int *product, int *average){
    *sum = a + b;
    *product = a * b;
    *average = (*sum) / 2;
}