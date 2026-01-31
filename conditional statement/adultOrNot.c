// Write a program to check whether a person is adult or not. (age>=18)
#include<stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age>=18){
        printf("You are an adult.");
    }else if (age<18 && age>=0){
        printf("You are not teenage.");
    }else{
        printf("Invalid age entered.");
    }
    return 0;
}