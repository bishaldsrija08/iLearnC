#include<stdio.h>

void printHello();
void goodBye();

int main(){
printHello();
goodBye();
return 0;
}

void printHello(){
    printf("Hello, World!\n");
}

void goodBye(){
    printf("Goodbye, World!\n");
}