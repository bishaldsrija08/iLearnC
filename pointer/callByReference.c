#include<stdio.h>
void printValue(int n);
void printValuePointer(int *n);
int main(){
    int n = 10;
    printf("Value before function call is %d\n",n);
    printValuePointer(&n);
    printf("Value after function call is %d\n",n);

    return 0;
}

void printValue(int n){
    n = n + 10;
    printf("Value inside function is %d\n",n);
}

void printValuePointer(int *n){
    *n = *n + 10;
    printf("Value inside function is %d\n",*n);
}