#include <stdio.h>

void main(){
    int x;

    printf("Digite um numero : ");
    scanf("%d", &x);
    printf("\nAntecessor de X : %d | Sucessor de X : %d\n", x-1, x+1);
}