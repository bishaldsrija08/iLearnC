// Invalid variable types and undeclared variables
#include<stdio.h>
int main(){
    b = a; // Error: 'a' and 'b' undeclared
    c = b*3; // Error: 'c' undeclared
    printf("Value of b: %d\n", b);
    printf("Value of c: %d\n", c);
}