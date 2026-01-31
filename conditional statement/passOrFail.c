#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if(marks>=35 && marks<=100){
        printf("You have passed.\n");
    }else if (marks<35 && marks>=0){
        printf("You have failed.\n");
    }else{
        printf("Invalid marks entered.\n");
    }
    return 0;
}