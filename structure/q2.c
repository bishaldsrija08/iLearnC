// WAP to enter address(house no, block, city, state) of 5 people

#include<stdio.h>
#include<string.h>
struct address
{
    int house_no;
    char block[20];
    char city[20];
    char state[20];
};

int main(){
    struct address a[5];
    printf("Enter the details of address: ");
    for(int i=0;i<5;i++){
        scanf("%d %s %s %s",&a[i].house_no,a[i].block,a[i].city,a[i].state);
    }
    // displaying the details of address
    for(int i=0;i<5;i++){
        printf("Details of address: ");
        printf("House No: %d, Block: %s, City: %s, State: %s\n",a[i].house_no,a[i].block,a[i].city,a[i].state);
    }
    return 0;
}