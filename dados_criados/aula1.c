#include <stdio.h>

//estruturas (structs) é um tipo de variavel definida pelo programador, ela pode conter dentro de si qualquer tipo de variavel.

struct aluno {
        char nome[50];
        int ra;
        float n1,n2,n3, media;
    };

void main(){
    struct aluno A;

    //as variaveis dentro do struct são acessadas pelo nome da variavel "." a variavel dentro do struct, como no exemplo a baixo
    //A.ra = x;

    printf("\nNome: ");
    fgets(A.nome, 50, stdin);
    getchar();

    printf("\nRA: ");
    scanf("%d", &A.ra);

    printf("\nNotas : ");
    scanf("%f%f%f", &A.n1, &A.n2, &A.n3);

    A.media = (A.n1 + A.n2 + A.n3) / 3;

    if(A.media >= 6){
        printf("\n%s : Aprovado", A.nome);
    } else {
        printf("\n%s : Reprovado", A.nome);
    }
}