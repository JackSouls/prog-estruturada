#include <stdio.h>

void main(){
    float sal = 0;

    //recebe o salario
    printf("Digite o salario : ");
    scanf("%f", &sal);

    //verifica a faixa do salario
    if(sal <= 600){
        printf("\nDesconto INSS => ISENTO");
    } else if (sal <= 1200){
        printf("\nDesconto INSS => 20%%");
    } else if (sal <= 2000){
        printf("\nDesconto INSS => 25%%");
    } else {
        printf("\nDesconto INSS => 30%%");
    }

}