#include<stdio.h>
int main(){
    int age = 30;
    int *ptr = &age; // ptr is a pointer to an integer, and it holds the address of age
    printf("The value of age is: %d\n", *ptr); // Using the dereference operator to get the value at the address stored in ptr
    printf("The value of age is: %d\n", age); // Directly accessing the value of age
    printf("The value of age is also: %d\n", *(&age)); // Using the address-of operator to get the address of age and then dereferencing it to get the value
    return 0;
}