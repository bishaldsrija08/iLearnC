// WAP that inputs users name and print its length.
#include<stdio.h>
void countLength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        count++;
    }
    printf("Length of the name is: %d\n", count-1);
}
int main(){
    char name[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    countLength(name);
    return 0;
}