#include <stdio.h>

void main(){
    int v[6], i, soma=0;

    for(i=0;i<6;i++){
        scanf("%d", &v[i]);
        soma+=v[i];
        printf("SOMA: %d", soma);
    }

}