#-------------------------------------------------------------------------------
# Name:        exercicio6
# Purpose:
#
# Author:      guilherme coelho
#
# Created:     02/12/2014
# Copyright:   (c) eldorado 2014
# Licence:     <your licence>
#-------------------------------------------------------------------------------

def lerArquivo():
    fo = open('ebook.txt','r')
    lines = fo.read()
    fo.close()
    return lines

def criarPaginacao(lines):

    contador = 1
    caracteresInicio = 0
    caracteres = 10000
    final = False

    while(final == False):
        nomeAquivo = "pagina"+str(contador)+".txt"
        fn = open(nomeAquivo, 'w')

        fn.writelines(lines[caracteresInicio :caracteres])

        contador +=  1
        caracteres += 10000
        caracteresInicio += 10000

        if lines[caracteresInicio :caracteres] == "":
            final = True

        fn.close()

if __name__ == '__main__':

    criarPaginacao(lerArquivo())



