#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void fatorial(){

    int fat,valor;

    printf("Entre com um valor para obter seu fatorial: \n");
    fflush(stdin);
    scanf("%d", &valor);

    for(fat = 1; valor > 1; valor = valor - 1){
        fat = fat * valor;
    }
    printf("Fatorial: %d\n", fat);
}

void ParOuImpar(){

    int parImpar;

    printf("Entre com um valor para verificar se ele é par ou impar: \n");
    fflush(stdin);
    scanf("%d", &parImpar);

    parImpar % 2 == 0 ? printf("%d é par\n", parImpar) : printf("%d é impar\n", parImpar);
}


void potencia(){

    int base, expoente;
    double potencia;

    printf("Entre com a base: \n");
    fflush(stdin);
    scanf("%d", &base);

    printf("Entre com o expoente: \n");
    fflush(stdin);
    scanf("%d", &expoente);

    potencia = pow(base, expoente);

    printf("Potencia: %lf\n", potencia);
}
int main()
{
    fatorial();
    ParOuImpar();
    potencia();

    return 0;
}
