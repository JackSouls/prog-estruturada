#include <stdio.h>

void main(){
    float salario_antigo , salario_novo;

    //recebe o salario antigo
    printf("Digite o salario antigo: ");
    scanf("%f", &salario_antigo);

    //verifica se o salario é maior que 1500
    if (salario_antigo >= 1500){
        //caso o salario seja maior que 1500, faça um reajuste de 10% do valor do salario
        salario_novo = salario_antigo * 1.1;
    } else {
        //caso seja menor que 1500, aumenta o salario em 20%
        salario_novo = salario_antigo * 1.2;
    }

    //exibe as informações
    printf("\nSalario Antigo: %.2f", salario_antigo);
    printf("\nSalario novo: %.2f", salario_novo);
    printf("\nReajuste : %.2f", salario_novo - salario_antigo);

}
