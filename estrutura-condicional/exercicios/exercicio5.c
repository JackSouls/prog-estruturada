#include <stdio.h>

void main(){
    int n;
    
    //recebe o valor de n
    printf("Valor : ");
    scanf("%d",&n);

    if((n%3) == 0 && (n%7) == 0){
        printf("\nÉ divisivel por 3 e por 7");
    } else{
        printf("\nNão é divisivel por 3 e por 7");
    }

}