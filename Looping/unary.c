#include<stdio.h>
int main(){
    int i = 1;
    printf("%d\n", i++); // Post-increment: prints 1, then i becomes 2 (use, then increment)


    int j = 1;
    printf("%d\n", ++j); // Pre-increment: j becomes 2, then prints 2 (increment, then use)


    int k =1;
    printf("%d\n", k--); // Post-decrement: prints 1, then k becomes 0 (use, then decrement)

    int m =1;
    printf("%d\n", --m); // Pre-decrement: m becomes 0, then prints 0 (decrement, then use)
    return 0;
}