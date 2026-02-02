#include<stdio.h>
float celToFer(float celsius);
int main(){
    int cel;
    printf("Enter temperature in Celsius: ");
    scanf("%d", &cel);
    float fer = celToFer(cel);
    printf("Temperature in Fahrenheit: %.2f\n", fer);
    return 0;

}

float celToFer(float celsius){
    return (celsius * 9.0 / 5.0) + 32.0;
}