#include <stdio.h>

void main(){
    int a, b, c;
    int maior_numero;

    //recebe os valores
    printf("Digite três valores : ");
    scanf("%d%d%d", &a, &b, &c);

    //verifica qual é o maior valor
    if((a > b) && (a > c)){
        printf("O maior valor é %d", a);
    } else if (b > c){
        printf("O maior valor é %d", b);
    } else {
        printf("O maior valor é %d", c);
    }
}