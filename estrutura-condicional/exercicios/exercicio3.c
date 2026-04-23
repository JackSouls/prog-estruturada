#include <stdio.h>

void main(){
    int n;
    
    //recebe o valor de n
    printf("Valor : ");
    scanf("%d",&n);

    if((n%3) == 0){
        printf("\nÉ múltiplo de 3");
    } else{
        printf("\nNão é multiplo de 3");
    }

}