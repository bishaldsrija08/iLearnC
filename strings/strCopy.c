#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "Hello World";
    char str2[] = "Bishal Rijal";
    strcpy(str1, str2);
    printf("The copied string is: %s\n", str1);
    return 0;
}