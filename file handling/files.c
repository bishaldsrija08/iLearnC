#include<stdio.h>
int main(){
    FILE *fptr; // declare a file pointer
    fptr = fopen("text.txt","w");
    if(fptr == NULL){
        printf("Error! File cannot be opened.");
        return 0;
    }else{
        // fprintf(fptr, "%c", 'M');
        // fprintf(fptr, "%c", 'A');
        // fprintf(fptr, "%c", 'N');
        // fprintf(fptr, "%c", 'G');
        // fprintf(fptr, "%c", 'O');

        // printf("%c", fgetc(fptr));
        // printf("%c", fgetc(fptr));
        // printf("%c", fgetc(fptr));
        // printf("%c", fgetc(fptr));
        // printf("%c", fgetc(fptr));

        fputc('M', fptr);
        fputc('A', fptr);
        fputc('N', fptr);
        fputc('G', fptr);
        fputc('O', fptr);


        fclose(fptr);
    }    
    return 0;
}