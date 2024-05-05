algoritmo "cada_linha"

var

n, i, j: inteiro
mat: vetor[0..9, 0..9] de real
vet: vetor[0..9] de real
maior: real

inicio

escreva ("Qual a ordem da matriz?  ")
leia (n)
     para i de 0 ate n - 1 faca
          para j de 0 ate n - 1 faca
               escreva ("Elemento [", i , "," , j , "]:")
               leia (mat[i,j])
          fimpara
     fimpara

     para i de 0 ate n - 1 faca
     maior <- mat[i, 0]
          para j de 1 ate n - 1 faca
               se mat[i,j] > maior entao
                  maior <- mat[i,j]
               fimse
          fimpara
		vet[i] <- maior
     fimpara

     escreval ("MAIOR ELEMENTO DE CADA LINHA: ")

     para i de 0 ate n - 1 faca
          escreval (vet[i])
     fimpara




fimalgoritmo