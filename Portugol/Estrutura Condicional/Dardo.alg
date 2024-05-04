algoritmo "dardo"

var

   a, b, c, maior: real


inicio

   escreval ("Digite as tres distancias: ")
   leia (a, b, c)

        se (a > b) e (a > c) entao
           maior <- a
        senao
             se b > c entao
                maior <- b
             senao
                  maior <- c
             fimse
        fimse

   escreval ("MAIOR DISTANCIA = " , maior:4:2)

fimalgoritmo