#include<stdio.h>
void namaste();
void bonjour();
    int main(){
        char ch;
        printf("Enter 'n' for Namaste and 'f' for Bonjour: ");
        scanf(" %c", &ch);
        if(ch == 'n'){
            namaste();
        }
        else if(ch == 'f'){
            bonjour();
        }
        else{
            printf("Invalid input\n");
        }
    }

void namaste(){
    printf("Namaste\n");
}

void bonjour(){
    printf("Bonjour\n");
}
