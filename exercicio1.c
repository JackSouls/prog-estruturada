#include <stdio.h>

void main(){
    char nome[50];

    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);

    printf("\nSeu nome: %s", nome);
}