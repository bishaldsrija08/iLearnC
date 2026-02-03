#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    printf("Age: %d\n", _age);
    printf("Address of age: %p\n", &age);
    printf("Address of age: %u\n", *(&age));
    printf("Address of age ptr: %u\n", ptr);
    return 0;
}