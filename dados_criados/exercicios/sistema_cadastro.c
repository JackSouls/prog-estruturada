#include <stdio.h>

typedef struct User{
    int id, idade, status; //status 1 = ativo | 0 = deletado 
    char nome[50], email[50];
} user;



void main(){
    int usr_count = 0;
    int menu = 0;
    int search_id;
    int c = 0;
    int ind = 0;
    int flag_found = 0;

    user usr[100];

    for(int i = 0; i < 100; i++)
        usr[i].status = -1; //status = -1 novo usuario

    while(menu != 5){
        printf("\nUsuarios => %d", usr_count);
        printf("\n1 - Cadastrar usuario \n2 - Listar usuarios \n3 - Buscar usuario por ID \n4 - Remover usuario \n5 - Sair");
        printf("\nEscolha : ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            flag_found = 0;
            for(int i = 0; i < ind+1 && flag_found == 0; i++){
                if(usr[i].status == -1){
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
                    ind++;
                    usr_count++;
                    flag_found = 1;
                    printf("ind=%d", i);
                } else if (usr[i].status == 0){
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
                    usr_count++;
                    flag_found = 1;
                    printf("ind=%d", i);
                }
                
            }
            
            printf("\nCadastro realizado.");
        break;

        case 2:
            for(int i = 0; i< ind; i++){
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
            flag_found = 0;
            

            printf("\nDigete o ID : ");
            scanf("%d", &search_id);
            while((c = getchar()) != '\n' && c != EOF){}
            c = 0;

            for(int i = 0; i < ind && flag_found == 0; i++){
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
                printf("Usuario nao encontrado");
            }
        break;

        case 4:
            flag_found = 0;
            search_id = 0;
            printf("\nDigite o ID para remoçao : ");
            scanf("%d", &search_id);
            while((c = getchar()) != '\n' && c != EOF){}
            c = 0;
 
            for(int i = 0; i < ind && flag_found == 0; i++){
                if(usr[i].id == search_id){
                    usr[i].status = 0;
                    flag_found = 1;
                    usr_count--;
                }
            }

            if(flag_found == 0){
                printf("Usuario nao encontrado");
            } else {
                printf("Usuario deletado.");
            }
        break;

        case 5:
        break;

        default:
            printf("Opção invalida, digite novamente");
        break;
        }
    }
}