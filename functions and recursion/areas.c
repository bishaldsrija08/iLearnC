#include <stdio.h>
float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float length, float width);
int main()
{
    int side, radius, length, width;
    printf("Enter the side of the square: ");
    scanf("%d", &side);
    printf("Area of Square: %.2f\n", squareArea((float)side));
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    printf("Area of Circle: %.2f\n", circleArea((float)radius));
    printf("Enter the length and width of the rectangle: ");
    scanf("%d %d", &length, &width);
    printf("Area of Rectangle: %.2f\n", rectangleArea((float)length, (float)width));
    return 0;
}

float squareArea(float side)
{
    return side * side;
}

float circleArea(float radius)
{
    return 3.14159f * radius * radius;
}

float rectangleArea(float length, float width)
{
    return length * width;
}