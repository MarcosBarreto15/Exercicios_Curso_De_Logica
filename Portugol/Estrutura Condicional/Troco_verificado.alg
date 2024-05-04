algoritmo "troco_verificado"
var

   preco, din, valorTot: real
   qtde: inteiro


inicio

    escreva ("Preço unitário do produto: ")
    leia (preco)
    escreva ("Quantidade comprada:" )
    leia (qtde)
    escreva ("Dinheiro recebido: ")
    leia (din)

    valorTot <- preco * qtde
    
             se din > valorTot entao
                escreval ("TROCO: " , din - valorTot:4:2)
             senao
                escreval ("DINHEIRO INSUFICIENTE. FALTAM " , valorTot - din:4:2, " REAIS ")
             fimse
 



fimalgoritmo