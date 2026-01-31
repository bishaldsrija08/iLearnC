#include<stdio.h>
int main(){
    int isSunday = 0;
    int isSnowing = 1;
    int isRaining =isSunday && isSnowing;
    isRaining?printf("Stay indoors.\n"):printf("You can go outside.\n");
    return 0;
}