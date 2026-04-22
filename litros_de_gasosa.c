#include <stdio.h>

void main (){
    float tempo, vel_med;
    float distancia;
    float litros_con;

    printf("Insira a velocidade média : \n");
    scanf("%f",&vel_med);
    printf("Insira o tempo decorrido em horas: \n");
    scanf("%f", &tempo);

    distancia = tempo * vel_med;

    litros_con = distancia/12;

    printf("Você percorreu %f km e gastou %f L de combustivel", distancia, litros_con);


}