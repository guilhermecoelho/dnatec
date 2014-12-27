#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    char str[10];
    char c;
    int i, contador;

    fp =fopen("teste.txt","w");

    if (fp == NULL) {
        printf ("Ocorreu um problema ao abrir o arquivo.\n");
        return 1;
    }

    printf ("Digite uma string: \n");
    fflush(stdin);
    scanf("%s", &str);

    printf ("Digite um caracter: \n");
    fflush(stdin);
    scanf("%s", &c);

    contador = 0;

    for (i = 0;i <strlen(str);i++){
       if(c == str[i]){
            contador++;
        }
    }

    contador != 0 ? fprintf(fp,"O caractere %c aparece %d vezes na string %s",c, contador, str) : fprintf(fp,"O caractere %c não existem na string %s",c,str);

    fclose (fp);

    return 0;
}
