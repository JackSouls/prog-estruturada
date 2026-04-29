#include <stdio.h>

void main(){
    char nome[50];
    int idade;
    float valor_plano;

    //recebe o nome e a idade
    printf("Digite o nome: ");
    fgets(nome, 50, stdin);
    printf("\nDigite a idade : ");
    scanf("%d", &idade);

    //atibui o valor do plano de acordo com a idade do cliente
    if(idade <= 10){
        valor_plano = 30;
    } else if (idade <= 29){
        valor_plano = 60;
    } else if (idade <= 45){
        valor_plano = 120;
    } else if (idade <= 59){
        valor_plano = 150;
    } else if ( idade <= 65){
        valor_plano = 250;
    } else {
        valor_plano = 400;
    }


    //imprime o nome, a idade e o valor do plano
    printf("\nNome => %s", nome);
    printf("\nIdade => %d", idade);
    printf("\nValor do Plano => %.2f", valor_plano);
}