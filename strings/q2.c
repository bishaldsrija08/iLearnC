// Ask the user to enter their full name, and then greet them by name.
#include<stdio.h>
int main(){
    char name[100];
    printf("Enter your full name: ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
    return 0;
}