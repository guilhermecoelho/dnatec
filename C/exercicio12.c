#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int numero;
    char rua[100];
    char cidade[50];
    char estado[2];
    char pais[50];
} Endereco;

typedef struct {
    int numeroConta;
    float saldo;
} Banco;

typedef struct {
    char nome[100];
    Endereco endereco;
    Banco banco;
} Pessoa;

int main()
{
    int n, i;
    Pessoa *fila;

    printf("quantidade de pessoas: \n");
    fflush(stdin);
    scanf("%d", &n);

    fila = (Pessoa*) malloc(n * sizeof(Pessoa));

    for (i =0; i < n; i++){

        printf("\nNovo\n");

        printf("Nome: \n");
        fflush(stdin);
        scanf("%s", &fila[i].nome);

        printf("\nEndereço\n");

        printf("numero: \n");
        fflush(stdin);
        scanf("%d", &fila[i].endereco.numero);
        printf("rua: \n");
        fflush(stdin);
        scanf("%s", &fila[i].endereco.rua);
        printf("cidade: \n");
        fflush(stdin);
        scanf("%s", &fila[i].endereco.cidade);
        printf("estado: \n");
        fflush(stdin);
        scanf("%s", &fila[i].endereco.estado);
        printf("pais: \n");
        fflush(stdin);
        scanf("%s", &fila[i].endereco.pais);

        printf("\nBanco\n");

        printf("numero da conta: \n");
        fflush(stdin);
        scanf("%d", &fila[i].banco.numeroConta);
        printf("saldo: \n");
        fflush(stdin);
        scanf("%f", &fila[i].banco.saldo);
    }

    for (i =0; i < n; i++){
        printf("\nPosição %d\n", i);

        printf("nome: %s \n", fila[i].nome);

        printf("\nEndereço\n");
        printf("numero: %d \n", fila[i].endereco.numero);
        printf("rua: %s \n", fila[i].endereco.rua);
        printf("cidade: %s \n", fila[i].endereco.cidade);
        printf("estado: %s \n", fila[i].endereco.estado);
        printf("pais: %s \n", fila[i].endereco.pais);

        printf("\nBanco\n");
        printf("numero da conta: %d \n", fila[i].banco.numeroConta);
        printf("Saldo: %f \n", fila[i].banco.saldo);
    }

    free(fila);

    return 0;
}
