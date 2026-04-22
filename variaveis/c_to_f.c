#include <stdio.h>

void main(){
    double c;
    double fahrenheit;

    printf("Centigrados: ");
    scanf("%lf\n   ",&c);

    fahrenheit = (9*c+160)/5;

    printf("Fahrenheit : %lf\n", fahrenheit);
}