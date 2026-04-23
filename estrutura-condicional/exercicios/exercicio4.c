#include <stdio.h>

void main(){
    int n;
    
    //recebe o valor de n
    printf("Valor : ");
    scanf("%d",&n);

    if((n%5) == 0){
        printf("\nÉ divisivel por 5");
    } else{
        printf("\nNão é divisivel por 5");
    }

}