#include <stdio.h>

void main(){
    float prestacao, taxa, tempo;
    float pretacao_juros;

    printf("Valor da prestacao : ");
    scanf("%f", &prestacao);
    printf("\nTaxa de juros : ");
    scanf("%f", &taxa);
    printf("\nTempo de atraso : ");
    scanf("%f", &tempo);

    pretacao_juros = prestacao + (prestacao * (taxa/100)); 

    printf("\nValor da prestacao : %f \nJuros : %f%% \nTempo de atraso : %f \nValor a ser pago : %f", prestacao, taxa, tempo, pretacao_juros);

}