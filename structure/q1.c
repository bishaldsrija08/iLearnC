// WAP to to store the data of 3 students using structure and display the data of students.
#include<stdio.h>
#include<string.h>
struct students{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct students s1;
    s1.roll = 1;
    s1.cgpa = 9.5;
    strcpy(s1.name,"Bishal Rijal");

    printf("Roll: %d\n",s1.roll);
    printf("CGPA: %.2f\n",s1.cgpa);
    printf("Name: %s\n",s1.name);

    struct students s2;
    s2.roll = 2;
    s2.cgpa = 9.0;
    strcpy(s2.name,"Hari Rijal");

    printf("Roll: %d\n",s2.roll);
    printf("CGPA: %.2f\n",s2.cgpa);
    printf("Name: %s\n",s2.name);

    struct students s3;
    s3.roll = 3;
    s3.cgpa = 8.5;
    strcpy(s3.name,"Pragyan Shahi");

    printf("Roll: %d\n",s3.roll);
    printf("CGPA: %.2f\n",s3.cgpa);
    printf("Name: %s\n",s3.name);

    return 0;
}