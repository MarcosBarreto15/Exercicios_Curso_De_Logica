algoritmo "media_pares"

var

   i, n, pares, contPares: inteiro
   media: real
   vet: vetor[0..99] de inteiro




inicio

      escreva ("Quantos elementos vai ter o vetor? ")
      leia (n)
           para i de 0 ate n - 1 faca
                escreva ("Digite um numero: ")
                leia (vet[i])
           fimpara
           
           pares <- 0
           contPares <- 0
           para i de 0 ate n - 1 faca
                se vet[i] mod 2 = 0 entao
                   pares <- pares + vet[i]
                   contPares <- contPares + 1
                fimse
           fimpara
           

           
                se contPares = 0 entao
                   escreval ("NENHUM NUMERO PAR ")
                senao
                   media <- pares / contPares
                   escreval ("MEDIA DOS PARES = " , media:4:1)
                fimse
           





fimalgoritmo