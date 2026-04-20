#include<stdio.h>
int main(){
    FILE *fptr; // declare a file pointer
    fptr = fopen("text.txt","r");
    if(fptr == NULL){
        printf("Error! File cannot be opened.");
        return 0;
    }else{
        char ch;
        fscanf(fptr, "%c", &ch);
        printf("The first character in the file is: %c\n", ch);
                fscanf(fptr, "%c", &ch);
        printf("The first character in the file is: %c\n", ch);
                fscanf(fptr, "%c", &ch);
        printf("The first character in the file is: %c\n", ch);
                fscanf(fptr, "%c", &ch);
        printf("The first character in the file is: %c\n", ch);
                fscanf(fptr, "%c", &ch);
        printf("The first character in the file is: %c\n", ch);
        
        fclose(fptr);
    }    

    return 0;
}