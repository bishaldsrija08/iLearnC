// WAP to store and display the details of 5 students using array of structure.
#include<stdio.h>
#include<string.h>

struct student
{
    int id;
    char name[20];
    float marks;
};

int main(){
    struct student s[2];
    for(int i=0;i<2;i++){
        printf("Enter the details of student: ");
        scanf("%d %s %f",&s[i].id,s[i].name,&s[i].marks);
    }
    // displaying the details of students
    for(int i=0;i<2;i++){
        printf("Details of student: ");
        printf("ID: %d, Name: %s, Marks: %.2f\n",s[i].id,s[i].name,s[i].marks);
    }


    return 0;
}