#include <stdio.h>
void calculatePrice(float value);
int main()
{
    float value = 100;
    calculatePrice(value);
    printf("Final Price: %.2f\n", value);
    return 0;
}

void calculatePrice(float value)
{
    value = value + 0.18 * value;
    printf("Inside Function Price: %.2f\n", value);
}