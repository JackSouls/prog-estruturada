#include <stdio.h>

void main(){
    int n1 =0, n2 = 0, soma = 0;

    //recebe os valores
    printf("Valor 1 e Valor 2: ");
    scanf("%d%d", &n1, &n2);

    //soma os dois valores
    soma = n1 + n2;

    //verifica se os valores são maiores que 10
    if(soma > 10)  
        printf("Soma maior que 10 : %d", soma);
}