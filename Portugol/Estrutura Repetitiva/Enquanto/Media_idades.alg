algoritmo "media_idades"

var

   idade, cont, soma: inteiro
   media: real


inicio

   escreval ("Digite as idades: ")
   leia (idade)

     enquanto idade > 0 faca
              cont <- cont + 1
              soma <- soma + idade
              leia (idade)
     fimenquanto
     
     se cont = 0 entao
        escreval ("IMPOSSIVEL CALCULAR ")
     senao
          media <- soma/cont
          escreva ("MEDIA = " , media:4:2)
     fimse




fimalgoritmo