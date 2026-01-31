// WAP to check wheter a character is uppercase or lowercase.
#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch>='A' && ch<='Z'){ // Every character has a corresponding ASCII value.
        printf("%c is an uppercase letter.\n", ch);
    }else if(ch>='a' && ch<='z'){
        printf("%c is a lowercase letter.\n", ch);
    }else{
        printf("%c is not an alphabetic character.\n", ch);
    }
    return 0;
}