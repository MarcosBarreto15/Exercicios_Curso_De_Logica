algoritmo "tempo_de_jogo"

var

hi, hf, duracao: inteiro

inicio

escreva ("Hora inicial: ")
leia (hi)
escreva ("Hora final: ")
leia (hf)

     se hi >= hf entao
        duracao <-  24 - hi + hf
     senao
          duracao <- hf - hi
     fimse

escreva ("O JOGO DUROU " , duracao , " HORA(S)")

fimalgoritmo