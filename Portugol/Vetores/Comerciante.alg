algoritmo "comerciante"

var

n, i, lucro10, lucro20, lucroM20: inteiro
nome: vetor[0..99] de caractere
pCompra: vetor[0..99] de real
pVenda: vetor[0..99] de real
somaCompra, somaVenda, lucroTot: real
lucro : vetor[0..99] de real
inicio

escreva ("Serao digitados dados de quantos produtos? ")
leia (n)
para i de 0 ate n - 1 faca
   escreval ("Produto " , i + 1 , ":")
   escreva ("Nome: ")
   leia (nome[i])
   escreva ("Preco de compra: " )
   leia (pCompra[i])
   escreva ("Preco de venda: ")
   leia (pVenda[i])
fimpara

lucro10 <- 0
lucro20 <- 0
lucroM20 <- 0

para i de 0 ate n - 1 faca
   lucro[i] <- (pVenda[i] - pCompra[i])/pCompra[i] * 100
   se lucro[i] < 10 entao
      lucro10 <- lucro10 + 1
   senao
      se (lucro[i] >=10) e lucro[i] <= 20 entao
         lucro20 <- lucro20 + 1
      senao
         lucroM20 <- lucroM20 + 1
      fimse
   fimse
fimpara

escreval
escreval ("RELATORIO: ")
escreval ("Lucro abaixo de 10%: " , lucro10)
escreval ("Lucro entre 10% e 20%: " , lucro20)
escreval ("Lucro acima de 20%: " , lucroM20)

somaCompra <- 0
somaVenda <- 0

para i de 0 ate n -1 faca
   somaCompra <- somaCompra + pCompra[i]
   somaVenda <- somaVenda + pVenda[i]
fimpara

lucroTot <- somaVenda - somaCompra

escreval ("Valor total de compra: " , somaCompra:4:2)
escreval ("Valor total de compra: " , somaVenda:4:2)
escreval ("Lucro total: " , lucroTot:4:2)

fimalgoritmo