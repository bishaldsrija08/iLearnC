#include<stdio.h>
int main(){
    int a; int b = a;
    int x, int y=x; // Invalid statement: redeclaration of 'int'
    char c = '**' // Invalid statement: multi-character constant
    printf("%d\n", y); // Output: garbage value because 'x' is uninitialized
    printf("%d\n", b); // Output: garbage value because 'a' is uninitialized
    printf("%d\n", 8^8); // Output: 0 because both bits are same and valid statement

    return 0;
}