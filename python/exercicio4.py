#-------------------------------------------------------------------------------
# Name:        exercicio4
# Purpose:
#
# Author:      guilherme coelho
#
# Created:     02/12/2014
# Copyright:   (c) eldorado 2014
# Licence:     <your licence>
#-------------------------------------------------------------------------------

def pergunta():
    valor = 500
    resposta = "n"
    maiorMenor = "n"
    maiorMenorInterno = "n"
    divisor = 100;
    while (resposta != "s"):
        resposta = raw_input("o numero eh "+str(valor)+"?")
        if resposta != "s":
            maiorMenorInterno = raw_input("o numero eh maior que "+str(valor)+ "?")
            if maiorMenorInterno == "s":
                valor = valor + divisor
            else:
                divisor  = divisor/ 2
                valor = valor - divisor
        else:
            print valor
if __name__ == '__main__':
    pergunta()


