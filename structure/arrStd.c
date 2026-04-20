#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student ece[100];
    ece[0].roll =1;
    ece[0].cgpa = 9.5;
    strcpy(ece[0].name,"Bishal Rijal");
    printf("Roll: %d\n",ece[0].roll);
    printf("CGPA: %.2f\n",ece[0].cgpa);
    printf("Name: %s\n",ece[0].name);

    return 0;
}