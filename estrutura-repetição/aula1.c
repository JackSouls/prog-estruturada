#include <stdio.h>

void main(){
    /*int i = 0;
    
    //sintaxe do for
    //for(valor_inicial; condição de permanencia; incremento){}

    vai imprimir os numeros de 0 a 100 no terminal
    for(i; i<=100; i+=2){
        printf("%d\n", i);
    }*/


    //tabuada de 0 a 10 de um numero digitado por um usuario
    int mult; 
    int n;

    //recebe o numero
    printf("Digite um multiplo: ");
    scanf("%d", &mult);

    for(n = 0; n<=10; n++){
        printf("%d * %d = %d\n", n, mult, n*mult);
    }
