#include <stdio.h>

void main(){
    float salario, reajuste, valor_reajustado;

    printf("Salario : ");
    scanf("%f", &salario);
    printf("\nReajuste em %% : ");
    scanf("%f", &reajuste);

    valor_reajustado = salario + (salario * (reajuste/100));
    printf("\nNovo Salario : %f", valor_reajustado);

}