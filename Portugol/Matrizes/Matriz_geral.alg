algoritmo "matriz_geral"

var

   n: inteiro
   i, j:inteiro
   positivos, linha, coluna: real
   mat, alt: vetor[0..9, 0..9] de real


inicio

      escreva ("Qual a ordem da matriz? ")
      leia (n)
           para i de 0 ate n - 1 faca
                para j de 0 ate n - 1 faca
                     escreva ("Elemento [", i, ",", j, "]: ")
                     leia (mat[i,j])
                fimpara
           fimpara
           
           positivos <- 0
           para i de 0 ate n - 1 faca
                para j de 0 ate n - 1 faca
                     se mat[i,j] >= 0 entao
                        positivos <- positivos + mat[i,j]
                     fimse
                fimpara
           fimpara
           
           escreval
           escreval ("SOMA DOS POSITIVOS: ", positivos:4:1)
           

           escreval
           escreva ("Escolha uma linha: ")
           leia (linha)
           escreva ("LINHA ESCOLHIDA: ")
           para i de 0 ate n - 1 faca
                para j de 0 ate n - 1 faca
                     se linha = i entao
                        escreva (mat[i,j]:2:1, " ")
                     fimse
                fimpara
           fimpara
           
           escreval
           escreval
           escreva ("Escolha uma coluna: ")
           leia (coluna)
           escreva ("COLUNA ESCOLHIDA: ")
           para i de 0 ate n - 1 faca
                para j de 0 ate n - 1 faca
                     se coluna = j entao
                        escreva (mat[i,j]:2:1, " ")
                     fimse
                fimpara
                
           fimpara
           escreval
           escreval
           escreva ("DIAGONAL PRINCIPAL: ")
           para i de 0 ate n - 1 faca
                para j de 0 ate n - 1 faca
                     se i = j entao
                        escreva (mat[i,j]:2:1, " ")
                     fimse
                fimpara
           fimpara
           
           para i de 0 ate n - 1 faca
                para j de 0 ate n - 1 faca
                    se mat[i,j] < 0 entao
                       mat[i,j] <- mat[i,j]^2
                    fimse
                    alt[i,j] <- mat[i,j]
                fimpara
           fimpara
           
           escreval
           escreval
           escreval ("MATRIZ ALTERADA: ")
           para i de 0 ate n - 1 faca
                para j de 0 ate n - 1 faca
                    escreva (alt[i,j]:4:1, " ")
                fimpara
                escreval
           fimpara

fimalgoritmo