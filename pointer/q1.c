#include<stdio.h>
int main(){
    int *ptr;
    int x;

    ptr = &x; // Correctly assign the address of x to ptr
    *ptr = 10; // Assign the value 10 to the location pointed by ptr

    *ptr += 5; // Increment the value at the location pointed by ptr by 5

    (*ptr)++; // Increment the value at the location pointed by ptr by 1

    printf("Value of x: %d\n", x); // Print the value of x
    return 0;
}