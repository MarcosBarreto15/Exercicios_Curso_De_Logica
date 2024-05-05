algoritmo "soma_impares"

var

   i, n1, n2, soma, troca: inteiro


inicio

   escreval ("Digite dois numeros: ")
   leia (n1, n2)
        se n1 > n2 entao
           troca <- n1
           n1 <- n2
           n2 <- troca
        fimse
        para i de (n1 + 1) ate (n2 - 1) faca
             se i mod 2 <> 0 entao
                soma <- soma + i
             fimse
        fimpara
        
   escreva ("SOMA DOS IMPARES: " , soma)



fimalgoritmo