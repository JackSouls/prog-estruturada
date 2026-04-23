#include <stdio.h>

void main(){
    float salario, prestacao;

    //recebe os valores
    printf("Digite o salário : ");
    scanf("%f", &salario);
    printf("\nDigite o valor da prestação : ");
    scanf("%f", &prestacao);

    if(prestacao > salario*0.3){
        printf("Emprestimo não pode ser concedido, valor da prestação execede parametros estabelecidos.");
    } else {
        printf("Emprestimo concedido.");
    }
}