algoritmo "experiencias"

var

i, n, qtde, sapo, rato, coelho, soma : inteiro
pcoelho, psapo, prato: real
tipo: caractere


inicio

escreva ("Quantos casos de teste serao digitados? ")
leia (n)
     para i de 1 ate n faca
         escreva ("Quantidade de cobaias: ")
         leia (qtde)
         escreva ("Tipo de Cobaia : ")
         leia (tipo)
              se tipo = "C" entao
                 coelho <- coelho + qtde
              senao
                   se tipo = "R" entao
                      rato <- rato + qtde
                   senao
                        sapo <- sapo + qtde
                   fimse
              fimse
              soma <- soma + qtde
              pcoelho <- coelho / soma * 100
              prato <- rato / soma * 100
              psapo <- sapo / soma * 100
         
     fimpara
     escreval ("Total: " , soma , " cobaias ")
     escreval ("Total de coelhos: " , coelho)
     escreval ("Total de ratos: " , rato)
     escreval ("Total de sapos: " , sapo)
     escreval ("Percentual de coelhos: " , pcoelho:2:2)
     escreval ("Percentual de ratos: " , prato:2:2)
     escreval ("Percentual de sapos: " , psapo:2:2)


fimalgoritmo