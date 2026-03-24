// WAP to store data of 3 students using structure and print the data of all the students.
#include<stdio.h>
#include<string.h>
// structure is a user defined data type which can hold different types of data. It is used to group related data together. It is similar to class in object oriented programming. It is used to represent a real world entity. It is used to represent a student, employee, etc. It is used to represent a record in a database. It is used to represent a structure in C.
struct student{
    char name[20];
    int roll;
    float cgpa;
};
int main(){
    struct student s1;
    s1.roll = 1;
    s1.cgpa = 3.5;
    strcpy(s1.name, "Bishal");
    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("CGPA: %.2f\n", s1.cgpa);

    struct student s2;
    s2.roll = 2;
    s2.cgpa = 3.8;
    strcpy(s2.name, "Suman");
    printf("Name: %s\n", s2.name);
    printf("Roll: %d\n", s2.roll);
    printf("CGPA: %.2f\n", s2.cgpa);


    struct student s3;
    s3.roll = 3;
    s3.cgpa = 3.9;
    strcpy(s3.name, "Sujan");
    printf("Name: %s\n", s3.name);
    printf("Roll: %d\n", s3.roll);
    printf("CGPA: %.2f\n", s3.cgpa);
    return 0;
}