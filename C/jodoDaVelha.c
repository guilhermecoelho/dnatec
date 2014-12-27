#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int linha, coluna, jogadorAtual, jogadas;
int finalizado = 0;
char jogador1 = 'x';
char jogador2 = 'o';

char tabuleiro[4][6] = {{'\\','0',' ','1',' ','2'},
                        {'0','_','|','_','|','_'},
                        {'1','_','|','_','|','_'},
                        {'2',' ','|',' ','|',' '}};

void imprimeTabuleiro(){
    for(linha = 0; linha < 4;linha++){
        for(coluna = 0; coluna < 6;coluna++){
            printf("%c", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }
}

int  converteCoordenadaLinha(){

    switch(linha)
    {
        case 0:
            linha = 1;
            break;
        case 1:
            linha = 2;
            break;
        case 2:
            linha = 3;
            break;
        default:
            break;
    }
    return linha;
}
int  converteCoordenadaColuna(){

    switch(coluna)
    {
        case 0:
            coluna = 1;
            break;
        case 1:
            coluna = 3;
            break;
        case 2:
            coluna = 5;
            break;
        default:
            break;
    }
    return coluna;
}

int checaCoordenada(){

    if(tabuleiro[linha][coluna] == 'x' || tabuleiro[linha][coluna] == 'o' ){
        return 1;
    } else {
        return 0;
    }
}
void jogadorAI(){
    printf(" Máquina jogando\n ");
    int checar = 1;
    while (checar != 0){
        srand(time(NULL));

        linha = rand() % 3;
        coluna = rand() % 3;

        linha = converteCoordenadaLinha();
        coluna = converteCoordenadaColuna();

        checar = checaCoordenada();
    }
}

void recebeCoordenada(char jogador){

    int entradaValida = 0;

    do{
        printf(" Jogador %c, coordenada linha e coluna: \n", jogador);
        scanf("%d %d", &linha, &coluna);
        getchar();
        if((linha != 0 && linha != 1 && linha != 2) || (coluna != 0 && coluna != 1 && coluna != 2) ){
            printf(" Valores invalidos\n ");
        } else {
            linha = converteCoordenadaLinha();
            coluna = converteCoordenadaColuna();
            entradaValida = 1;
        }
    }while (entradaValida == 0);
}

void preencheTabuleiro(char jogador){

    int checar = checaCoordenada();

    if(checar == 0){

        tabuleiro[linha][coluna] = jogador;

        if(jogador == jogador1){
            jogadorAtual = 2;
        } else {
            jogadorAtual = 1;
        }

    } else {
        printf("Coordenada já preenchida\n");
    }

}
void checaVitoria(){

    if((tabuleiro[1][1] == 'x' && tabuleiro[1][3] == 'x' && tabuleiro[1][5] == 'x') ||
       (tabuleiro[2][1] == 'x' && tabuleiro[2][3] == 'x' && tabuleiro[2][5] == 'x') ||
       (tabuleiro[3][1] == 'x' && tabuleiro[3][3] == 'x' && tabuleiro[3][5] == 'x') ||
       (tabuleiro[1][1] == 'x' && tabuleiro[2][1] == 'x' && tabuleiro[3][1] == 'x') ||
       (tabuleiro[1][2] == 'x' && tabuleiro[2][2] == 'x' && tabuleiro[3][2] == 'x') ||
       (tabuleiro[1][1] == 'x' && tabuleiro[2][3] == 'x' && tabuleiro[3][5] == 'x') ||
       (tabuleiro[1][5] == 'x' && tabuleiro[2][3] == 'x' && tabuleiro[3][1] == 'x')){
            printf("\njogador %c venceu!\n", jogador1);
            finalizado = 1;
    }

    else if((tabuleiro[1][1] == 'o' && tabuleiro[1][3] == 'o' && tabuleiro[1][5] == 'o') ||
       (tabuleiro[2][1] == 'o' && tabuleiro[2][3] == 'o' && tabuleiro[2][5] == 'o') ||
       (tabuleiro[3][1] == 'o' && tabuleiro[3][3] == 'o' && tabuleiro[3][5] == 'o') ||
       (tabuleiro[1][1] == 'o' && tabuleiro[2][1] == 'o' && tabuleiro[3][1] == 'o') ||
       (tabuleiro[1][2] == 'o' && tabuleiro[2][2] == 'o' && tabuleiro[3][2] == 'o') ||
       (tabuleiro[1][3] == 'o' && tabuleiro[2][3] == 'o' && tabuleiro[3][5] == 'o') ||
       (tabuleiro[1][1] == 'o' && tabuleiro[2][3] == 'o' && tabuleiro[3][5] == 'o') ||
       (tabuleiro[1][5] == 'o' && tabuleiro[2][3] == 'o' && tabuleiro[3][1] == 'o')){
            printf("\njogador %c venceu!\n", jogador2);
            finalizado = 1;
    }

    else if(jogadas == 9){
        printf("\nEmpatou!");
        finalizado = 1;
    }
}

int tipoJogo(){

    int opcao;
    int entradaValida = 0;
    do{
        printf("Escolha uma opção:\n 1: Um jogador\n 2: Dois jogadores\n ");
        fflush(stdin);
        scanf("%d", &opcao);
        getchar();
        if(opcao == 1 || opcao == 2){
            entradaValida = 1;
        } else {
            printf(" Valores invalidos\n ");
        }

    }while (entradaValida == 0);


    return opcao;
}

int main()
{
    int opcaoDeJogo = tipoJogo();

    while(finalizado == 0){

        imprimeTabuleiro();

        checaVitoria();

        if(finalizado == 0){
            if(jogadorAtual == 1){
                recebeCoordenada(jogador1);
                preencheTabuleiro(jogador1);
            } else {
                opcaoDeJogo == 1 ? jogadorAI() : recebeCoordenada(jogador2);

                preencheTabuleiro(jogador2);
            }
         jogadas++;
        }
    }
    return 0;
}
