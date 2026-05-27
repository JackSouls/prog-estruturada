#include <stdio.h>

void main(){
    char letras[5];
    int i = 0;

    for(i; i<5;i++){
        printf("\nDigite uma letra: ");
        scanf("%c", &letras[i]);
        getchar();
    }

    for(i=0; i<5; i++){
        printf("\n%d => %c", i+1, letras[i]);
    }
}