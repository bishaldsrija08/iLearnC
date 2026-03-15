 // Create a string firstName and lastName to store details of user and print all the characters using a loop.

 void printString(char str[]);

#include<stdio.h>
int main(){
    char firstName[] = "John";
    char lastName[] = "Doe";
    printf("First Name: ");
    printString(firstName);
    printf("Last Name: ");
    printString(lastName);

    return 0;
}

void printString(char str[]){
    for(int i=0; str[i]!='\0';i++){
        printf("%c ", str[i]);
    }
    printf("\n");
}