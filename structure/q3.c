// Write a program to enter record of student (marks, name, address) and display them in ascending order according to marks using structure.

#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int marks;
    char address[100];
};

struct student s[5];
int main(){
    printf("Enter the details of student: ");
    for(int i=0;i<5;i++){
        scanf("%s %d %s",s[i].name,&s[i].marks,s[i].address);
    }
    // sorting the details of student according to marks in ascending order
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i-1;j++){
            if(s[j].marks > s[j+1].marks){
                struct student temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    // displaying the details of student
    for(int i=0;i<5;i++){
        printf("Details of student: ");
        printf("Name: %s, Marks: %d, Address: %s\n",s[i].name,s[i].marks,s[i].address);
    }
    return 0;
}