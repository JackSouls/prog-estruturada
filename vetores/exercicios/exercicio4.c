#include <stdio.h>

void main(){
    int v[5], i =0, mult6;

    for(i;i<5;i++){
        printf("Numero : ");
        scanf("%d", &v[i]);
    }

    for(i = 0; i<5; i++){
        printf("%d ", v[i]);
        if(v[i] % 6 == 0){
            mult6++;
        }
    }
    printf("\nMultiplos de 6: %d", mult6);
}