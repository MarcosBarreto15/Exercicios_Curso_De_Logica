 algoritmo "dados_pessoas"

var

   i, n, contF, contM: inteiro
   alt : vetor[0..99] de real
   gen : vetor[0..99] de caractere
   maior, menor, somaF, mediaF: real



inicio

      escreva("Quantas pessoas serao digitadas? ")
      leia (n)
           para i de 0 ate n - 1 faca
                escreva ("Altura da " , i + 1 , "ª pessoa: ")
                leia (alt[i])
                escreva ("Genero da " , i + 1 , "ª pessoa: ")
                leia (gen[i])
           fimpara
           
           menor <- alt[0]
           maior <- alt[0]
           
           para i de 0 ate n -1 faca
                se alt[i] < menor entao
                   menor <- alt[i]
                fimse
                
                se alt[i] > maior entao
                   maior <- alt[i]
                fimse
           fimpara

           escreval ("Menor altura: " , menor:2:2)
           escreval ("Maior altura: " , maior:2:2)
           
           somaF <- 0
           contF <- 0
           para i de 0 ate n - 1 faca
                se gen[i] = "F" entao
                   contF <- contF + 1
                   somaF <- somaF + alt[i]
                fimse
           fimpara
           
           mediaF <- somaF / contF
           escreval ("Media das alturas das mulheres = " , mediaF:2:2)
           
           contM <- 0
           para i de 0 ate n - 1 faca
                se gen[i] = "M" entao
                   contM <- contM + 1
                fimse
           fimpara
           
           escreval ("Numero de homens = " , contM)
           



fimalgoritmo