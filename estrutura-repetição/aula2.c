#include <stdio.h>

void main(){
    //enquanto um variavel for = 0 , c considera aquela expressão como falsa
    /*
    int c = 1;

    //verdadeiro sera impresso uma vez
    while(c){
        printf("verdadeiro");
        c = 0;
    }
    */

    //codigo imprimindo de 1 a 10 usando o loop while
    /*int i = 1;

    while (i <= 10){
        printf("%d\n", i);
        i++;
    }*/

    /*
    //while vai rodar ate o usuario digitar 0
    int x = 1;

    while (x != 0){
        printf("\nAdivinhe o numero: ");
        scanf("%d", &x);
        if(x == 0){
            printf("\nAcertou.");
        } else {
            printf("\nErrou. A diferença do numero digitado para o numero certo é : %d", x - 0);
        }
    }*/
    int n1, n2, k = 1;
    
    while (k != 0){
        printf("\nDigite dois números : ");
        scanf("%d%d", &n1, &n2);
        printf("\nA soma é : %d",n1 + n2);
        
        printf("\nDeseja continuar? \n1 => Sim \n0 => Não\n");
        scanf("%d", &k);
    }
    /*
    do{
    /codigo/
    }while(condição);

    executa o codigo primeiro e verifica a condição depois
    */
}
