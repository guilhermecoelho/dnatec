#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[10];
    char strInversa[10];

    int tamanhoStr,tamanhoCompara, i;

    printf("texto: \n");
    fflush(stdin);
    scanf("%s", &str);

    tamanhoStr = strlen(str);
    tamanhoCompara = tamanhoStr;

    for(i = 0; i < tamanhoStr; i++){

        strInversa[i] = str[tamanhoCompara-1];
        tamanhoCompara--;
    }

    strcmp(str, strInversa) == 0 ? printf("É palíndromo") : printf("Não é palíndromo");

    return 0;
}
