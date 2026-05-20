#include <stdio.h>

void main(){
    int multiplicando, multiplicador, produto = 0;
    printf("Digite dois numeros: ");
    scanf("%d", &multiplicando);
    scanf("%d", &multiplicador);


    for(int i = 1; i<= multiplicador; i++){
        produto = produto + multiplicando;
    }
    printf("%d", produto);

}
