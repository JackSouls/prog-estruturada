#include <stdio.h>

void main(){
    int a, b, c;
    int n1 = 0, n2 = 0, n3 = 0;

    //recebe os valores
    printf("Digite valor A : ");
    scanf("%d", &a);
    printf("\nDigite o valor B : ");
    scanf("%d", &b);
    printf("\nDigite o valor C : ");
    scanf("%d", &c);

    //coloca os numeros em ordem crescente
    //guarda na variavel n1, n2 e n3
    //o numero menor fica no n3, o numero do meio fica no n2, o maior fica no n1
    //o caso se repete para os tres if, cobrindo todas as possibilidades
    if((a > b) && (a > c)){
        n1 = a;
        if((b > c)){
            n2 = b;
            n3 = c;
        } else {
            n2 = c;
            n3 = b;
        }
    }

    if((b > a) && (b > c)){
        n1 = b;
        if (c > a){
            n2 = c;
            n3 = a;
        } else {
            n2 = a;
            n3 = c;
        }
        
    }

    if((c > a) && (c > b)){
        n1 = c;
        if(b > a){
            n2 = b;
            n3 = a;
        } else {
            n2 = a;
            n3 = b;
        }
    }

    printf("%d, %d, %d", n3, n2, n1);
}