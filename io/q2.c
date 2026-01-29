// WAP to calculate area of circle. [Hint: area=π*r*r]
#include<stdio.h>
int main(){
    float r, a;
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    a = 3.14 * r * r;
    printf("Area of circle: %.2f\n", a);
    return 0;
}