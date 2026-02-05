// WAP to enter price of 3 items and calculate total price with 5% GST.
#include<stdio.h>
int main(){
    float price[3];
    printf("Enter the price of 1 item1:\n");
    scanf("%f", &price[0]);
    printf("Enter the price of 2 item2:\n");
    scanf("%f", &price[1]);
    printf("Enter the price of 3 item3:\n");
    scanf("%f", &price[2]);

    printf("The price of item1 is: %.2f\n", price[0]+price[0]*0.15);
    printf("The price of item1 is: %.2f\n", price[1]+price[1]*0.15);
    printf("The price of item1 is: %.2f\n", price[2]+price[2]*0.15);
}