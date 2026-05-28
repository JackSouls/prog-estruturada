#include <stdio.h>

void main(){
    float preco_compra[5], preco_venda[5];
    int l1 = 0, l2 = 0, l3 = 0;

    /*l1 = Lucro <10% 
      l2 = 10%<= Lucro <= 20%
      l3 = Lucro > 20%*/

    for(int i = 0; i<5 ; i++){
        printf("Digite o valor de Compra: ");
        scanf("%f", &preco_compra[i]);
        printf("\nDigite o valor de venda: ");
        scanf("%f", &preco_venda[i]);
    }

    for(int i = 0; i<5; i++){
        float lucro = preco_venda[i] - preco_compra[i];

        if(lucro < preco_compra[i] * 0.1){
            l1++;
        } else if (lucro >= preco_compra[i] * 0.1 && lucro <= preco_compra[i] * 0.2){
            l2++;
        } else {
            l3++;
        }
    }

    printf("\nLucro < 10%% => %d | 10%%<= Lucro <= 20%% => %d | Lucro > 20%% => %d", l1, l2, l3);


}