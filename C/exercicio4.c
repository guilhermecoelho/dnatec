#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10];

    int tamanho;

    //popula vetor
    for(tamanho = 0; tamanho < 10; tamanho++){
        printf("digite o valor da posição %d\n", tamanho);
        fflush(stdin);
        scanf("%d", &vetor[tamanho]);
    }
    //exibe vetor
    for(tamanho = 0; tamanho < 10; tamanho++){
        printf("vetor [%d]\n", vetor[tamanho]);
    }

    //ordena vetor
    for(tamanho = 0; tamanho < 9; tamanho++){
        int i;
        for( i = tamanho; i < 9; i++){
            if(vetor[tamanho] > vetor[i+1]){
                int valorMaior = vetor[tamanho];
                int valorMenor = vetor[i+1];
                vetor[tamanho] = valorMenor;
                vetor[i+1] = valorMaior;
            }
        }
    }
    //exibe vetor ordenado
    printf("\nvetor ordenado \n");
    for(tamanho = 0; tamanho < 10; tamanho++){
        printf("vetor [%d]\n", vetor[tamanho]);
    }

    return 0;
}
