#include <stdio.h>
#include <stdlib.h>

int main()
{
    char vetor[5][10] = {"palavra1","palavra2", "palavra3", "palavra4", "palavra5"};
    char str[10];
    int linha, posicao, existe;

    printf("Digite uma palavra :\n");
    fflush(stdin);
    scanf("%s", &str);

    for(linha = 0; linha < 5; linha++){
       if(strcmp(vetor[linha], str) == 0){
            posicao = linha;
            existe = 1;
        }
    }

    existe == 1 ? printf("Palavra existe na posição %d", posicao) : printf("Palavra não encontrada");

    return 0;
}
