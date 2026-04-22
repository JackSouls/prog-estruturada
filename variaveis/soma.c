#include <stdio.h>

int main (){
    int x,y;
    int soma;

    printf("Digite dois valores :\n");
    scanf("%d%d", &x, &y);

    soma = x + y;

    printf("%d + %d = %d\n", x, y,soma);

    if( soma%2 == 0){
        printf("O número é par\n");
    } else {
        printf("O número é impar\n");
    }

    return 0;
}