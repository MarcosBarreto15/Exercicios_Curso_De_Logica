algoritmo "diagonal_negativos"

var

i, j, n, cont: inteiro
mat: vetor[0..9, 0..9] de inteiro

inicio

      escreva ("Qual a ordem da matriz? ")
      leia (n)

           para i de 0 ate  n - 1 faca
                para j de 0 ate n - 1 faca
                   escreva ("Elemento [", i, ",", j, "]:")
                   leia (mat[i,j])
                fimpara
           fimpara
           
           escreval ("DIAGONAL PRINCIPAL: ")
           
           para i de 0 ate  n - 1 faca
                para j de 0 ate n - 1 faca
                     se i = j entao
                        escreva (mat[i,j])
                     fimse
                fimpara
           fimpara
           
           cont <- 0
           para i de 0 ate n - 1 faca
                para j de 0 ate n - 1 faca
                     se (mat[i,j]) < 0 entao
                        cont <- cont + 1
                     fimse
                fimpara
           fimpara
           
           escreval
           escreva ("QUANTIDADE DE NEGATIVOS = " ,cont)
           




fimalgoritmo