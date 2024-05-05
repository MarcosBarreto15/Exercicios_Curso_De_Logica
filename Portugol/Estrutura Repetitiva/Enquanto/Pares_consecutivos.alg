algoritmo "pares_consecutivos"


var

x, cont, soma: inteiro



inicio



escreva ("Digite um numero inteiro: ")
leia (x)
enquanto x <> 0 faca
     se x mod 2 <> 0 entao
        x <- x + 1
     fimse
     cont <- 1
     soma <- x
        enquanto cont <= 4 faca
                 x <- x + 2
                 soma <- soma + x
                 cont <- cont + 1
        fimenquanto
 escreval ("SOMA = " , soma)
 escreva ("Digite um numero inteiro: ")
 leia (x)
 
 fimenquanto





fimalgoritmo
