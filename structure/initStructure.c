#include<stdio.h>
struct student{
    char name[20];
    int age;
    float score;
};
int main(){
    struct student s1 = {"Bishal Rijal", 22, 9.5};
    printf("Name: %s\n",s1.name);
    printf("Age: %d\n",s1.age);
    printf("Score: %.2f\n",s1.score);
    return 0;
}