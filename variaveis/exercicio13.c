#include <stdio.h>

void main(){
    float saldo;
    float novo_saldo;
    printf("Digite saldo : ");
    scanf("%f", &saldo);

    novo_saldo = saldo + (saldo * 0,02);
    printf("Novo saldo : %f", novo_saldo);

}