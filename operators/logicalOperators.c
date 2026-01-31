#include<stdio.h>
int main(){
    printf("%d\n", 1 && 1);
    printf("%d\n", 1 && 0);
    printf("%d\n", 0 && 1);
    printf("%d\n", 0 && 0);
    printf("%d\n", 1 || 1);
    printf("%d\n", 1 || 0);
    printf("%d\n", 0 || 1);
    printf("%d\n", 0 || 0);
    printf("%d\n", !1);
    printf("%d\n", !0);
    // Evaluation
    printf("%d\n", 5>4 && 4<5);
    printf("%d\n", 5>4 || 4>5);
    printf("%d\n", !(5>4));
    return 0;

}