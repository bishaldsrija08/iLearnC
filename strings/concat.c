#include<stdio.h>
#include<string.h>
int main(){
    char str[100]= "Bishal ";
    char str2[100]= "Rijal";
    strcat(str, str2);
    printf("%s", str);
    return 0;
}