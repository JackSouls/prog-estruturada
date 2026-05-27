#include <stdio.h>
#include <string.h>

void main(){
    float media[10],nota[20], p1, p2;
    int sit[10], i = 0;

    for(i; i<10;i++){
        
        printf("\nP1: ");
        scanf("%f", &p1);
        printf("\nP2: ");
        scanf("%f", &p2);
        nota[i] = p1;
        nota[i+1] = p2;
        media[i] = (p1 + p2) / 2;

        //1-Aprovado 2-Reprovado
        if(media[i] >= 6){
            sit[i] = 1;
        } else {
            sit[i] = 0;
        }        
    }

    printf("\nALUNO | NOTA 1 | NOTA 2 | MEDIA | SITUACAO");
    for(i = 0; i<10; i++){
        char display_situacao[9];

        if(sit[i] == 1){
            strcpy(display_situacao, "Aprovado ");
        } else {
            strcpy(display_situacao, "Reprovado");
        }
        
        printf("\n%d    | %.2f  | %.2f  | %.2f  | %s", i+1, nota[i], nota[i+1], media[i], display_situacao);
    }
    


}