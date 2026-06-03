#include <stdio.h>

struct Aluno
{
    char nome[50];
    int ra;
    float notas[3], media;
};
typedef struct Aluno aluno; 

void main(){
    aluno a[3];

    for(int i = 0; i<3; i++){
        printf("\nNome : ");
        fgets(a[i].nome, 50, stdin);
        
        printf("\nRA : ");
        scanf("%d", &a[i].ra);

        for(int z = 0; z<3; z++){
            printf("\nNota %d : ", z+1);
            scanf("%f", &a[i].notas[z]);    
            a[i].media = a[i].media + a[i].notas[z];
            
        }
        getchar();
        
        a[i].media = a[i].media / 3;
    }

    for(int i = 0; i<3; i++){
        if(a[i].media >= 6){
            printf("\n%s Aprovado", a[i].nome);
        } else {
            printf("\n%s Reprovado", a[i].nome);
        }
    }

}
