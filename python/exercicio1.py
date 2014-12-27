#-------------------------------------------------------------------------------
# Name:        exercicio1
# Purpose:
#
# Author:      guilherme coelho
#
# Created:     01/12/2014
# Copyright:   (c) eldorado 2014
# Licence:     <your licence>
#-------------------------------------------------------------------------------


palavra = raw_input("Digite uma palavra")
invertido = palavra[::-1]

if invertido == palavra:
    print palavra + " eh palindromo"
else:
    print palavra +" nao e palindromo"

