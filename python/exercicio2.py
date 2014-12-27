#-------------------------------------------------------------------------------
# Name:        exercicio2
# Purpose:
#
# Author:      guilherme coelho
#
# Created:     01/12/2014
# Copyright:   (c) eldorado 2014
# Licence:     <your licence>
#-------------------------------------------------------------------------------

def trianguloRetangulo(linhas):
    pontos = ""
    for desenho in range(0,linhas):
        pontos = pontos +"*"
        print pontos

def trianguloIsoceles(linhas, linhasAux=0):
    if linhas == 0:
        return 0
    else:
        print(' ' * ( linhas + 1 ) + '*' * ( linhasAux * 2 + 1 ))
        return trianguloIsoceles( linhas - 1, linhasAux + 1 )

def trianguloIsocelesInvertido(linhas, linhasAux=1):
    if linhas == 0:
        return 0
    else:
        print(' ' * ( linhasAux + 1 ) + '*' * ( linhas * 2 - 1 ))
        return trianguloIsocelesInvertido( linhas - 1, linhasAux + 1 )

def losangulo(linhas):
    trianguloIsoceles(linhas)
    trianguloIsocelesInvertido(linhas)



trianguloRetangulo(int(input("digite o numero de linhas para o triangulo retangulo")))
trianguloIsoceles(int(input("digite o numero de linhas para o triangulo isoceles")))
losangulo(int(input("digite o numero de linhas para o losangulo")))



