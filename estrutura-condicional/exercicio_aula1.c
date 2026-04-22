#include <stdio.h>

void main(){
    //declara a variavel do primeiro numero
    int n1;

    //leia o numero e guarda na variavel n1
    printf("Digite um numero: ");
    scanf("%d", &n1);

    //verifica se o número é maior que 10
    if(n1 >= 10){
        //caso seja maior, multiplica por 2
        n1 = n1 * 2;
    } else {
        //caso seja menor, divide por 2 
        n1 = n1 / 2;
    }

    printf("\nO resultado é : %d", n1);

}
