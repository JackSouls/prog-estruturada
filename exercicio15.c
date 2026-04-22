#include <stdio.h>

void main(){
    float valor_produto;
    float desconto;
    float valor_desconto;
    float valor_aplicado;


    printf("Digite o valor do produto : ");
    scanf("%f", &valor_produto);
    printf("\nDigite o desconto em porcento : ");
    scanf("%f", &desconto);

    valor_desconto = valor_produto * (desconto/100);
    valor_aplicado = valor_produto - valor_desconto;

    printf("\nValor do desconto : %f", valor_desconto);
    printf("\nValor do produto com desconto aplicado : %f", valor_aplicado);

}