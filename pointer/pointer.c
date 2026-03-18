#include<stdio.h>
int main(){
    int age = 90;
    int *ptr = &age;
    printf("The value of age is %d\n", age);
    printf("The value of age is %d\n", *ptr);
    printf("The address of age is %p\n", &age);
    // printf("The address of age is %p\n", ptr);
    return 0;
}