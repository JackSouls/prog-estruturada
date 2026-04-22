#include <stdio.h>

void main(){
    char nome[50];
    printf("Digite: ");
    fgets(nome, 50, stdin);

    printf("%s\n", nome);

}