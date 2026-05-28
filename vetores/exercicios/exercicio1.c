#include <stdio.h>

void main(){
    int inteiros[5],busca, i = 0, encontrado = 0, resultado;

    for(i; i<5;i++){
        scanf("%d", &inteiros[i]);
       }

    printf("Digite um numero para busca: ");
    scanf("%d", &busca);
    
    i = 0;
    while((i < 5)&&(encontrado == 0)){
        if(inteiros[i] == busca){
            resultado = i;
            encontrado = 1;
        }
        i++;
    }

    if(encontrado == 0){
        printf("\nNao encontrado!");
    } else {
        printf("\nPosicao => %d", resultado);
    }

}