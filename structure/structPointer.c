#include<stdio.h>
struct student{
    char name[20];
    int age;
    float score;
};
int main(){
    struct student s1 = {"Bishal Rijal", 22, 9.5};
    struct student *ptr = &s1;
    printf("%d \n", (*ptr).age);
    printf("%d", ptr->age);
    return 0;
}