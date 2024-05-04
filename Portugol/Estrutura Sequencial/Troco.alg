algoritmo "troco"

var

din, preco, troco: real
qtde: inteiro


inicio

      escreva ("Preço unitário do produto: ")
      leia (preco)
      escreva ("Quantidade comprada: ")
      leia (qtde)
      escreva ("Dinheiro recebido: ")
      leia (din)
      
      troco <- din - (preco * qtde)
      
      escreval ("TROCO = " , troco:4:2)
      




fimalgoritmo