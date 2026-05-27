#include <stdio.h>

void main(){
    int v[5], i =0;

    for(i; i<5; i++){
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }

    for(i=0; i<5;i++){
        if(v[i] % 2 == 0){
            printf("\n%d PAR : %d", i + 1, v[i]);
        } else {
            printf("\n%d IMPAR : %d", i + 1, v[i]);
        }
    }

}