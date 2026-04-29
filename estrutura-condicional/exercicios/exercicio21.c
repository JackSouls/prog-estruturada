#include <stdio.h>

int main(){
    //quardo o tipo do usuario, 1 => professor 2=> aluno
    int usuario;
    char nome_livro[50];

    //recebe o valor do usuario e o nome do livro
    printf("Digite o nome do Livro : ");
    fgets(nome_livro,50,stdin);
    printf("\nDigite o tipo de usuario. \n1 => Professor \n2 => Aluno");
    scanf("%d", &usuario);

    //verifica se o tipo de usuario é valido
    if(usuario != 1 && usuario != 2){
        printf("Usuario invalido");
        return 0;
    }

    //imprime os dados prossessados
    printf("\nNome do Livro : %s", nome_livro);
    if(usuario == 1){
        printf("\nUsuario : Professor");
        printf("\nTotal de dias : 10");
    } else {
        printf("\nUsuario : Aluno");
        printf("\nTotal de dias : 3");
    }

    return 0;
}