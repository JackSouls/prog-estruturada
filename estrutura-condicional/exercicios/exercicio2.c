#include <stdio.h>

void main(){
    int n1, n2, soma;

    //recebe os valores
    printf("Valor 1 e Valor 2 : ");
    scanf("%d%d", &n1, &n2);

    //soma os valores
    soma = n1 + n2;

    //verifica se a soma é maior que 20
    if(soma > 20){
        //caso a soma seja maior, apresenta o valor da soma e soma ele a +8
        printf("\nSoma de n1 e n2 : %d + 8 = %d\n", soma, soma + 8);
    } else {
        //caso seja menor igual a 20, apresenta o valor da soma e subtrai ele a -5
        printf("\nSoma de n1 e n2 : %d - 5 = %d\n", soma, soma - 5);
    }
}