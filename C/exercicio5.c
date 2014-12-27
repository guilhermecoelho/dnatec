#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[2][5];

    int linha, coluna;

    //popula vetor
    for (linha = 0; linha < 2; linha++){
        for(coluna = 0; coluna < 5; coluna++){
            printf("Entre com um inteiro da linha %d e coluna %d: \n", linha, coluna);
            fflush(stdin);

            scanf("%d", &vetor[linha][coluna]);
        }
    }

    //exibe vetor
    for (linha = 0; linha < 2; linha++){
        for(coluna = 0; coluna < 5; coluna++){
            printf("Vetor [%d][%d]: %d\n", linha, coluna, vetor[linha][coluna]);
        }
    }
    return 0;
}
