#-------------------------------------------------------------------------------
# Name:        projeto final
# Purpose:
#
# Author:      guilherme coelho
#
# Created:     03/12/2014
# Copyright:   (c) eldorado 2014
# Licence:     <your licence>
#-------------------------------------------------------------------------------
import random

#variaveis
tamanhoCampo = 20
entradaValidada = False
fimDeJogo = False
jogadas = ((tamanhoCampo*tamanhoCampo) - (tamanhoCampo*2))

#cria o tabuleiro
def tabuleiro():

    tabuleiro =[['x'  for j in range(tamanhoCampo)] for i in range(tamanhoCampo)]
    return tabuleiro

#cria um tabuleiro minado
def minarTabuleiro():

    preenchido = False
    totalBombas = 0
    tabuleiroMinado =[[False for j in range(tamanhoCampo)] for i in range(tamanhoCampo)]

    while(totalBombas < tamanhoCampo*2):
        preenchido = False
        while(preenchido == False):
            x = gerarRandom()
            y = gerarRandom()
            valorPosicao = tabuleiroMinado[x][y]
            if(valorPosicao == False):
                tabuleiroMinado[x][y] = True
                preenchido = True
                totalBombas += 1


    return tabuleiroMinado

#gera valores aleatorios para minar o campo
def gerarRandom():

    x = random.randint(0,tamanhoCampo-1)
    return x

#imprimi o tabuleiro
def imprimirTabuleiro(tabuleiro):

    for i in range(len(tabuleiro)):
        print tabuleiro[i]

#verifica se as coordenadas sao validas e se o campo ja foi escolhido
def checaEntradas(x, y):

    if (x > tamanhoCampo or x < 0) or (y > tamanhoCampo or y < 0) :
        print 'coordenada incorreta'
        return False
    elif tabuleiro[x][y] == ' ':
        print 'posicao ja escolhida'
        return False
    else:
        return True

#verifica se a coordenada passada est? minada
def verificaPosicao(x,y,tabuleiroMinado, tabuleiro):

    if tabuleiroMinado[x][y] == True:
        tabuleiro[x][y] = '*'
        print "BUUMM, voce pisou em uma mina, fim de jogo\n"
        imprimirTabuleiro(tabuleiro)
        return True
    else:
        tabuleiro[x][y] = ' '
        return False


#inicializa tabuleiros
tabuleiro = tabuleiro()
tabuleiroMinado = minarTabuleiro()


while(fimDeJogo == False):

    print "\nproxima rodada\n"
    imprimirTabuleiro(tabuleiro)
    imprimirTabuleiro(tabuleiroMinado)
    entradaValidada = False

    while(entradaValidada == False):
        x = int(raw_input("Digite a coordenada X"))
        y = int(raw_input("Digite a coordenada Y"))
        entradaValidada = checaEntradas(x,y)

    fimDeJogo = verificaPosicao(x,y,tabuleiroMinado, tabuleiro)

    #verifica a quantidade de jogadas
    if fimDeJogo == False:
        jogadas -= 1
        if jogadas == 0:
            print "Parabens, voce sobreviveu!!\n"
            fimDeJogo = True









