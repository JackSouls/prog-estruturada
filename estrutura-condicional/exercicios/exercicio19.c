#include <stdio.h>

void main(){
    int ponto1, ponto2, ponto3;
    int n1, n2, n3;
    int soma;

    //recebe o ponto de cada jogador
    printf("Pontos Jogador 1 : ");
    scanf("%d", &ponto1);
    printf("\nPontos Jogador 2 : ");
    scanf("%d", &ponto2);
    printf("\nPontos Jogador 3 : ");
    scanf("%d", &ponto3);

    //calcula a soma dos pontos
    soma = ponto1 + ponto2 + ponto3;


    //Coloca os pontos em ordem crescente
    if((ponto1 > ponto2) && (ponto1 > ponto3)){
        n1 = ponto1;
        if(ponto2 > ponto3){
            n2 = ponto2;
            n3 = ponto3;
        } else {
            n2 = ponto3;
            n3 = ponto2;
        }
    } 

    if((ponto2 > ponto1) && (ponto2 > ponto3)){
        n1 = ponto2;
        if ((ponto1 > ponto3)){
            n2 = ponto1;
            n3 = ponto3;
        } else {
            n2 = ponto3;
            n3 = ponto1; 
        } 
    }

    if((ponto3 > ponto1) && (ponto3 > ponto2)){
        n1 = ponto3;
        if((ponto1 > ponto2)){
            n2 = ponto1;
            n3 = ponto2;
        } else {
            n2 = ponto2;
            n3 = ponto1;
        }
    }


    //imprime a ordem dos pontos
    printf("\nPontos da Equipe!\n3ºColocado => %d\n2ºColocado => %d\n1ºColocado => %d", n3, n2, n1);

    //verifica se a equipe foi classificada
    if(soma > 100){
        printf("\nEquipe classificada");
        printf("\nMédia dos pontos : %d", soma/3);
    } else {
        printf("\nEquipe desclassificada");
    }
}