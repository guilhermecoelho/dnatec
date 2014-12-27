#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float x;
    float y;
    int operacao;
} variaveis;

float calculadora(float x, float y, int operacao){

    float resultado;

    switch(operacao){
        case 1:
            resultado = x + y;
            break;
        case 2:
            resultado = x - y;
            break;
        case 3:
            resultado = x * y;
            break;
        case 4:
            resultado = x/y;
            break;
        default:
            break;
    }
    return resultado;

}

int main()
{
    float resultado;
    variaveis v;

    printf("Escolha uma operação\n 1 - soma \n 2 - subtração\n 3 - multiplicação\n 4 -divisão\n");
    fflush(stdin);
    scanf("%d", &v.operacao);

    printf("Entre com o valor de x: \n");
    fflush(stdin);
    scanf("%f", &v.x);

    printf("Entre com o valor de y: \n");
    fflush(stdin);
    scanf("%f", &v.y);

    resultado =  calculadora(v.x, v.y, v.operacao);

    printf("Resultado: %f\n", resultado);

    return 0;
}
