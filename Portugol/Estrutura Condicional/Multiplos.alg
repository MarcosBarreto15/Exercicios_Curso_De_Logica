algoritmo "multiplos"



var

   n1, n2, troca: inteiro

inicio

   escreval ("Digite dois numeros inteiros: ")
   leia (n1, n2)
        se n1 < n2 entao
	   troca <- n1
           n1 <- n2
           n2 <- troca
        fimse

        se (n1 mod n2 = 0) ou (n2 mod n1 = 0) entao
           escreva ("Sao multiplos")
        senao
           escreva ("Nao sao multiplos")
        fimse


fimalgoritmo