#include <stdio.h>
#include <stdlib.h>

    typedef struct{
        int numero;
        int senha;
        float saldo;
    } Conta;

int main()
{
    Conta conta;

    conta.numero = 35;
    conta.senha = 28;
    conta.saldo = 18.00;

    float soma = conta.saldo + conta.numero;
    float sub = conta.saldo - conta.numero;
    float mult = conta.saldo * conta.numero;

    printf("Numero: %d", conta.numero);
    printf("\nSenha: %d", conta.senha);
    printf("\nSaldo: %f\n", conta.saldo);

    printf("\nSaldo soma: %f", soma);
    printf("\nSaldo subtração: %f", sub);
    printf("\nSaldo multiplicação: %f", mult);

    return (0);
}
