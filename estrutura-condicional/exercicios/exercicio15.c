#include <stdio.h>

void main(){
    float val_compra = 0, val_venda = 0;

    //recebe o valor da compra
    printf("Digite o valor da compra : ");
    scanf("%f", &val_compra);

    //verifica a porcetagem do lucro e atribui o val_venda
    if(val_compra <= 20){
        val_venda = val_compra * 1.45;
    } else {
        val_venda = val_compra * 1.30;
    }

    printf("Valor de venda => %.2f", val_venda);
}