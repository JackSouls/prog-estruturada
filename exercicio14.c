#include <stdio.h>

void main(){
    float base, altura;
    printf("Digite a base : ");
    scanf("%f", &base);
    printf("\nDigite altura : ");
    scanf("%f", &altura);

    printf("\nPerimetro : %f", base*2+altura*2);
    printf("\nArea : %f", base * altura);

}