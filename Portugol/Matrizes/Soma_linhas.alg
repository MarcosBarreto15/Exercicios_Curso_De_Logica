algoritmo "soma_linhas"

var

m, n, i, j:  inteiro
mat: vetor[0..9,0..9] de real
vet: vetor[0..9] de real



inicio

      escreva ("Qual a quantidade de linhas da matriz? ")
      leia (m)
      escreva ("Qual a quantidade de colunas da matriz? ")
      leia (n)
      
           para i de 0 ate m - 1 faca
                escreval ("Digite os elementos da " , i + 1 , "ª linha: ")
                   para j de 0 ate n - 1 faca
                        leia (mat[i,j])
                   fimpara
           fimpara

           para i de 0 ate m -1 faca
                     vet[i] <- 0
                     para j de 0 ate n -1 faca
                          vet[i] <- vet[i] + mat[i,j]
                     fimpara
           fimpara
           
           escreval ("VETOR GERADO: ")
           
           para i de 0 ate m - 1 faca
                escreval (vet[i])
           fimpara
           


fimalgoritmo