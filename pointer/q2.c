// Print the value of i using pointer to pointer.
#include<stdio.h>
int main(){
    int i =10;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("The value of i is: %d", **pptr);
    return 0;
}