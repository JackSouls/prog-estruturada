#include <stdio.h>

int main(){
    int mes;

    //recebe o valor do mês
    printf("Digite o número do mês(1-12) : ");
    scanf("%d", &mes);

    if(mes < 1 || mes > 12){
        printf("Não existe mês com esse número");
        return 0;
    }

    switch (mes)
    {
        case 1:
        printf("Janeiro");
        break;

        case 2:
        printf("Fevereiro");
        break;

        case 3:
        printf("Março");
        break;

        case 4:
        printf("Abril");
        break;

        case 5:
        printf("Maio");
        break;

        case 6:
        printf("Junho");
        break;

        case 7:
        printf("Julho");
        break;

        case 8:
        printf("Agosto");
        break;

        case 9:
        printf("Setembro");
        break;

        case 10:
        printf("Outubro");
        break;

        case 11:
        printf("Novembro");
        break;

        case 12:
        printf("Dezembro");
        break;
    
    default:
        break;
    }


}