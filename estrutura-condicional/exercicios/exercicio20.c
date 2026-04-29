#include <stdio.h>

void main(){
    float saldo_medio;

    //recebe o saldo media
    printf("Digite o saldo medio : ");
    scanf("%f", &saldo_medio);

    //verifica a faixa de credito de acordo com a tabela 
    if(saldo_medio <= 500){
        printf("Nenhum crédito");
    } else if(saldo_medio <= 1000){
        printf("30%% do valor do saldo médio");
    } else if(saldo_medio <= 3000){
        printf("40%% do valor do saldo médio");
    } else if(saldo_medio <= 3001){
        printf("50%% do valor do saldo médio");
    }
}