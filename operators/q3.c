#include<stdio.h>
int main(){
    int isMonday = 1;
    int isRaining = 0;
    int isCloudy = isMonday || isRaining;
    isCloudy?printf("Take an umbrella.\n"):printf("No need for an umbrella.\n");
    return 0;
}