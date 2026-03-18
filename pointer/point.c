#include<stdio.h>
int main(){
    int age = 30;
    int *ptr = &age; // pointer to age variable
    int _ptr = *ptr; // dereferencing the pointer to get the value at the address stored in ptr
    // *ptr = value at the address stored in ptr
    // &age = address of age variable
    printf("Age: %d\n", age); // Output: Age: 30
    printf("Pointer Value: %u\n", ptr); // Output: Pointer Value:
    return 0;
}