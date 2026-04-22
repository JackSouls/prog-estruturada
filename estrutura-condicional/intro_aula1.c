#include <stdio.h>

void main(){
    //declara as variaveis
    float media, nota1, nota2, nota3 = 0;

    //recebe as notas
    printf("Digite as 3 notas: ");
    scanf("%f%f%f", &nota1, &nota2, &nota3);

    //calcula a media do aluno
    media = (nota1 + nota2 + nota3) / 3;

    //declara uma condição a ser verificada
    if(media >= 6){
        //se a condição for verdade, executa o codigo
        printf("\nAluno aprovado!");
    } else {
         //caso a expressão seja falsa executa o codigo abaixo
        printf("\nAluno reprovado!");
    }

}
