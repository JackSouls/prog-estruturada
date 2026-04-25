#include <stdio.h>

int main(){
    int ano_nascimento, ano_atual, idade;

    //recebe os valores do ano de nascimento
    printf("Digite o ano de nascimento : ");
    scanf("%d", &ano_nascimento);
    printf("\nDigite o ano atual : ");
    scanf("%d", &ano_atual);

    //verifica se o ano de nascimento é valido
    if((ano_nascimento < 0) || (ano_nascimento > ano_atual) || (ano_atual < 1)){
        printf("Ano de nascimento invalido ou ano atual invalido.");
        return 0;
    }

    //calcula a idade da pessoa
    idade = ano_atual - ano_nascimento;
    printf("\nIdade : %d", idade);
}