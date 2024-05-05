algoritmo "maior_posicao"

var


   n, i, posicao: inteiro
   vet: vetor [0..9] de real
   maior: real


inicio

      escreva ("Quanto numeros voce vai digitar? ")
      leia (n)
      
           para i de 0 ate n - 1 faca
                escreva ("Digite um numero: ")
                leia (vet[i])
           fimpara

           maior <- 0
           posicao <- 0
           para i de 0 ate n - 1 faca
                se vet[i] > maior entao
                   maior <- vet[i]
                   posicao <- i
                fimse
           fimpara

           escreval
           escreval ("MAIOR VALOR: " , maior:2:1)
           escreval ("POSICAO DO MAIOR VALOR = " , posicao)

fimalgoritmo