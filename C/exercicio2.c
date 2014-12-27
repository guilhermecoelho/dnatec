#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char c;
    int i;
    float f;
    char str[100];

} Entrada;

int main()
{
    Entrada entrada;

    printf("Entre com um caracter, inteiro, float\n");
    fflush(stdin);

    scanf("%c %d %f", &entrada.c, &entrada.i, &entrada.f);

    entrada.c == 'd' ? printf("o caracter é d\n") : printf("o caracter não é d\n");
    entrada.i > 10 ? printf("o inteiro é maior que 10 \n") : printf("o inteiro não é maior que 10 \n");
    entrada.f <= 10.56 ? printf("o float é menor ou igual a 10.56 \n") : printf("o float é maior que 10.56 \n");

    printf("Entre com uma string\n");
    gets(entrada.str);

    puts(entrada.str);
    printf("tamanho string: %d\n",strlen(entrada.str) );

    return 0;
}
