#include <stdio.h>

int main(){
    int n;

    //recebe o valor
    printf("Valor : ");
    scanf("%d", &n);

    //verifica se o numero é maior do que 20
    if(n > 20){
        printf("O número é maior do que 20");
    } else if (n == 20){
        printf("O número é igual a 20");
    } else if (n < 20){
        printf("O número é menor do que 20");
    }

    return 0;
}