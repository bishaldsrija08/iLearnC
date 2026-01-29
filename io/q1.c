// WAP to calculate area of square.[A = side * side]

#include<stdio.h>
int main(){
    int side, area;
    printf("Enter the side of the square: ");
    scanf("%d", &side);
    area = side * side;
    printf("Area of the square: %d\n",area);
    return 0;
}