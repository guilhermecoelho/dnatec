#-------------------------------------------------------------------------------
# Name:        exercicio5
# Purpose:
#
# Author:      guilherme coelho
#
# Created:     02/12/2014
# Copyright:   (c) eldorado 2014
# Licence:     <your licence>
#-------------------------------------------------------------------------------


def bubbleSort():
    vetor = [8, 6, 9, 3, 4, 1]

    tamanho = len(vetor)
    for i in range(0, len(vetor)-1):
        for j in range(0, len(vetor)-1-i):
                if vetor[ j ] > vetor[j + 1]:
                        vetor[j], vetor[j + 1] = vetor[j + 1], vetor[j]
    return vetor

if __name__ == '__main__':
    print bubbleSort()
