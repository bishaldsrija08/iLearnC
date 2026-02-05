#include <stdio.h>
int main()
{
    int marks[3];
    printf("Enter marks of computer: ");
    scanf("%d", &marks[0]);

    printf("Enter marks of maths: ");
    scanf("%d", &marks[1]);

    printf("Enter marks of physics: ");
    scanf("%d", &marks[2]);

    printf("Computer = %d, Maths = %d, Physics = %d\n", marks[0], marks[1], marks[3]);
    return 0;
}