algoritmo "lanchonete"

var

c, qtde: inteiro
   valor, total: real

inicio

   escreva ("Codigo do produto comprado: ")
   leia (c)
        escolha c
        caso 1
        valor <- 5.00
        caso 2
        valor <- 3.50
        caso 3
        valor <- 4.80
        caso 4
        valor <- 8.90
        caso 5
        valor <- 7.32
        fimescolha

   escreva ("Quantidade comprada: ")
   leia (qtde)
   total <- valor * qtde
   escreva ("Valor a pagar: R$ " , total:4:2)

fimalgoritmo
