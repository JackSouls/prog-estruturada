#include <stdio.h>

typedef struct User{
    int id, idade, status; //status 1 = ativo | 0 = deletado 
    char nome[50], email[50];
} user;



void main(){

    int x = 2;
    int menu = 0;
    int search_id;
    int c = 0;

    user usr[x];

    while(menu != 5){
        printf("\n1 - Cadastrar usuário \n2 - Listar usuários \n3 - Buscar usuário por ID \n4 - Remover usuário \n5 - Sair");
        printf("\nEscolha : ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            for(int i = 0; i< x; i++){
                printf("\nDigite o ID : ");
                scanf("%d", &usr[i].id);
                while((c = getchar()) != '\n' && c != EOF){}
                c = 0;
                
                printf("\nDigite o nome : ");
                fgets(usr[i].nome, 50, stdin);
                

                printf("\nDigite a idade : ");
                scanf("%d", &usr[i].idade);
                while((c = getchar()) != '\n' && c != EOF){}
                c = 0;
                
                printf("\nDigite o email : ");
                fgets(usr[i].email, 50, stdin);

                
                usr[i].status = 1;
            }
            printf("\nCadastro realizado.");
        break;

        case 2:
            for(int i = 0; i< x; i++){
                if(usr[i].status == 1){
                    printf("\nID : %d", usr[i].id);
                    printf("\nNome : %s", usr[i].nome);
                    printf("\nIdade : %d", usr[i].idade);
                    printf("\nEmail : %s", usr[i].email);
                } 
            }
        break;

        case 3:
            search_id = 0;
            int flag_found = 0;

            printf("\nDigete o ID : ");
            scanf("%d", &search_id);
            int c;
            while((c = getchar()) != '\n' && c != EOF){}
            c = 0;

            for(int i = 0; i < x; i++){
                if(usr[i].status == 1){
                    if(usr[i].id == search_id){
                        flag_found = 1;
                        printf("\nID : %d", usr[i].id);
                        printf("\nNome : %s", usr[i].nome);
                        printf("\nIdade : %d", usr[i].idade);
                        printf("\nEmail : %s", usr[i].email);
                    }
                }
            }

            if(flag_found == 0){
                printf("Usuario não encontrado");
            }
        break;

        case 4:
            search_id = 0;
            printf("\nDigite o ID para remoção : ");
            scanf("%d", &search_id);

            for(int i = 0; i < x; i++){
                if(usr[i].id == search_id)
                    usr[i].status = 0;
            }
        break;

        default:
            printf("Opção invalida, digite novamente");
        break;
        }
    }



}