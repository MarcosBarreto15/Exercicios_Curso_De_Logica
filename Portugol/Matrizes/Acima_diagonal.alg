algoritmo "acima_diagonal"

var

 n, i, j, soma: inteiro
 mat: vetor[0..9, 0..9] de inteiro


inicio

      escreva("Qual a ordem da matriz? ")
      leia (n)
           para i de 0 ate n - 1 faca
                para j de 0 ate n - 1 faca
                     escreva ("Elemento [", i, ",", j, "]: ")
                     leia (mat[i,j])
                fimpara
           fimpara
           
           soma <- 0
           para i de 0 ate n - 1 faca
                para j de 0 ate n - 1 faca
                     se i < j entao
                        soma <- soma + mat[i,j]
                     fimse
                fimpara
           fimpara

           escreval ("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = ", soma)



fimalgoritmo