#include <stdio.h>

void main(){
    char nome[50], endereco[50], telefone[50];

    printf("Digite nome : ");
    fgets(nome, 50, stdin);
    printf("\n");
    printf("Digite endereco : ");
    fgets(endereco, 50, stdin);
    printf("\n");
    printf("Digite telefone : ");
    fgets(telefone, 50, stdin);
    printf("\n");

    printf("Nome : %s | Endereco : %s | Telefone : %s", nome, endereco, telefone);


}