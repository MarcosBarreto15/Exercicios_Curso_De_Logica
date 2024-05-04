algoritmo "glicose"

var

   medida: real

inicio

   escreva ("Digite a medida da glicose: ")
   leia (medida)

        se medida <= 100.0 entao
           escreval ("Classificação: normal ")
        senao
             se medida <= 140.0 entao
                escreval ("Classificação: elevado ")
             senao
                  escreval ("Classificação: diabetes ")
             fimse
        fimse
fimalgoritmo