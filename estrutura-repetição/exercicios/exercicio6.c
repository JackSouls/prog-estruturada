#include <stdio.h>

void main(){
    int x = 1, y = 1, soma = 0;

    printf("%d ", x);
    printf("%d", y);
    
    for(int i = 0; i<18;i++){
        soma = x + y;
        printf("%d ", soma);
        if(i%2 == 0){
            x = soma;
        }   else {
            y = soma;
        }
    }
}
