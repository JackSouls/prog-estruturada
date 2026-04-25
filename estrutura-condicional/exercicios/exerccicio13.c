#include <stdio.h>

void main(){
    char nome[50];
    float prova1, prova2, media;

    //recebe o nome do aluno
    printf("Digite o nome do aluno : ");
    fgets(nome, 50, stdin);

    //recebe as notas do aluno
    printf("\nDigite o valor da prova 1 : ");
    scanf("%f", &prova1);
    printf("\nDigite o valor da prova 2 : ");
    scanf("%f", &prova2);

    //calcula a media das provas
    media = (prova1 + prova2)/2;

    //imprime nome e notas do aluno
    printf("\nNome => %s \nNota Prova 1 => %.1f \nNota Prova 2 => %.1f \nMédia => %.1f", nome, prova1, prova2, media);

    //verifica se o aluno foi aprovado
    if(media >= 7){
        printf("\nAprovado!");
    } else if (media < 3){
        printf("\nReprovado :(");
    } else {
        printf("\nEm Prova Final");
    }

}   