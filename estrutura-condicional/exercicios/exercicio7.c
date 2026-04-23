#include <stdio.h>

void main(){
    int n;

    //recebe o valor
    printf("Valor : ");
    scanf("%d", &n);

    //verifica se o numero esta entre 20 e 50
    if((n >= 20) && (n <= 50)){
        printf("O número está entre 20 e 50");
    } else {
        printf("O número não está entre 20 e 50");
    }
}