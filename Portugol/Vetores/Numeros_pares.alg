algoritmo "numeros_pares"

var

   n, i, cont: inteiro
   vet: vetor[0..9] de inteiro


inicio

   escreva ("Quantos numeros voce vai digitar? ")
   leia (n)
      para i de 0 ate n - 1 faca
           escreva ("Digite um numero: ")
           leia (vet[i])
      fimpara
      
      cont <- 0
      
      escreval
      escreval ("NUMEROS PARES: ")
      
      para i de 0 ate n - 1 faca
           se vet[i] mod 2 = 0 entao
              escreva (vet[i], " ")
              cont <- cont + 1
           fimse
      fimpara
      
      escreval
      escreval
      escreva ("QUANTIDADE DE PARES: " , cont)



fimalgoritmo