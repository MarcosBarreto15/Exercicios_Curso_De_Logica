algoritmo "validacao_de_nota"

var

   n1, n2, media: real


inicio

   escreva ("Digite a primeira nota: ")
   leia (n1)
        enquanto (n1 < 0) ou (n1 > 10.0) faca
           escreva ("Valor invalido! Tente novamente: ")
           leia (n1)
        fimenquanto
   escreva ("Digite a segunda nota: ")
   leia (n2)
        enquanto (n2 < 0) ou (n2 > 10.0) faca
           escreva ("Valor invalido! Tente novamente: ")
           leia (n2)
        fimenquanto

   media <- (n1 + n2)/2
   escreva ("MEDIA = " , media:2:2)


fimalgoritmo