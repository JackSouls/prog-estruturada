#include <stdio.h>

void main(){
    int inteiros[5], i=0,busca, encontrado = 0, resultado;

    for(i; i<5;i++){
        scanf("%d", &inteiros[i]);
       }

    printf("Digite um numero para busca: ");
    scanf("%d", &busca);

    for(int in=0; in<5; in++){
        if(inteiros[in] == busca){
            encontrado = 1;
            resultado = in;
        }
    }

    if(encontrado == 0){
        printf("\nNao encontrado!");
    } else {
        printf("\nPosicao => %d", resultado);
    }

}