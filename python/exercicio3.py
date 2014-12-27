#-------------------------------------------------------------------------------
# Name:        exercicio3
# Purpose:
#
# Author:      guilherme coelho
#
# Created:     02/12/2014
# Copyright:   (c) eldorado 2014
# Licence:     <your licence>
#-------------------------------------------------------------------------------


if __name__ == '__main__':
    vetor = [1,2,1,5,2,7,5,3,3]
    vetorDiferente =[]
    for vt in range(0, len(vetor)):
         count = 0
         valor = vetor[vt]
         for vtChk in range(0, len(vetor)):
            if valor == vetor[vtChk]:
               count = count+1
         if count < 2:
            vetorDiferente.append(valor)

    print "Os numeros " +str(vetorDiferente)+ " nao se repetem"

