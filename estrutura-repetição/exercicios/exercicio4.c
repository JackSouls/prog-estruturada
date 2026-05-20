#include <stdio.h>

void main(){
    char nome[50];
    int idade, sexo;
    int i = 0;
    for(i; i < 20; i++){
        printf("\nDigite um nome : ");
        fgets(nome,50,stdin);
        printf("\nSexo\n1 => Masculino\n2 => Feminino\n3 => Não declarar");
        scanf("%d", &sexo);
        getchar();
        printf("\nDigite a idade : ");
        scanf("%d", &idade);
        getchar();
        //utilize o getchar(); após os scanfs para limpar o buffer, para o fgets ser utilizado novamente na proxima iteração

        switch(sexo){

            case 1:
                if(idade > 21){
                    printf("Nome: %s", nome);
                }
            break;

            default:
            break;
        }
    }
}
