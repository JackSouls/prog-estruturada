#include <stdio.h>

void main(){
    float sal[10], n_sal[10];
    
    for(int i = 0; i<10; i++){
        printf("\nDigite o salario : ");
        scanf("%f", &sal[i]);
        getchar();

        n_sal[i] = sal[i] * 1.8;
    }

    for(int i = 0; i<10; i++){
        printf(" \nFUNCIONARIO  |  SALARIO  |  NOVO SALARIO  |");
        printf(" \n  %d         |     %.2f  |          %.2f  |", i, sal[i], n_sal[i]);
    }
    

}