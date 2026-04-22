#include <stdio.h>

void main(){
    float real, dolar, cotacao;

    printf("Digite o valor em Real : ");
    scanf("%f", &real);
    printf("\nDigite a cotação atual : ");
    scanf("%f", &cotacao);

    dolar = real / cotacao;

    printf("\nR$ %f --> US$ %f", real, dolar);

}
