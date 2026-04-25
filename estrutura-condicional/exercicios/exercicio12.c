#include <stdio.h>

void main(){
    int idade;

    //recebe o valor
    printf("Digite sua idade : ");
    scanf("%d", &idade);

    //verifica se a pessoa é maior de idade
    if(idade >= 18){
        if(idade > 65){
            printf("Maior de 65 anos.");
        } else {
            printf("Maior de 18 anos.");
        }
    } else {
        printf("Menor de 18 anos.");
    }
}