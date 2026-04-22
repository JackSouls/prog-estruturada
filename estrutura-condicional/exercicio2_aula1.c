#include <stdio.h>

void main(){
    float salario_antigo;

    //recebe o salario antigo
    printf("Digite o salario antigo: ");
    scanf("%f", &salario_antigo);

    //verifica se o salario é maior que 1500
    if (salario_antigo >= 1500){
        //caso o salario seja maior que 1500, faça um reajuste de 10% do valor do salario
        printf("\nSalario Antigo: %.2f", salario_antigo);
        printf("\nSalario novo: %.2f", salario_antigo + (salario_antigo*0.1));
        printf("\nReajuste : 10%%");
    } else {
        //caso seja menor que 1500, aumenta o salario em 20%
        printf("\nSalario Antigo: %.2f", salario_antigo);
        printf("\nSalario novo: %.2f", salario_antigo + (salario_antigo*0.2));
        printf("\nReajuste : 20%%");
    }

}
