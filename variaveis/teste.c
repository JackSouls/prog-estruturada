#include <stdio.h>

int main()
{
    int x,y,z,a,b,c;
    int media;
    printf("Insira 6 numeros\n");

    scanf("%d%d%d%d%d%d", &x,&y,&z,&a,&b,&c);
    media = (x+y+z+a+b+c)/6;

    printf("Media = %d\n",media);

    return 0;
}