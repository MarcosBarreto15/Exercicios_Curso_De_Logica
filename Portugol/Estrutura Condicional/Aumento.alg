algoritmo "aumento"

var

    sal, novosal, aumento: real
    porcentagem: inteiro



inicio

   escreva ("Digite o salario da pessoa: ")
   leia (sal)


        se sal <= 1000 entao
           porcentagem <- 20
        senao
             se sal <= 3000 entao
                   porcentagem <- 15
             senao
                  se sal <= 8000 entao
                     porcentagem <- 10
                  senao
                      porcentagem <- 5
                  fimse
             fimse
        fimse
        
        aumento <- sal * porcentagem / 100
        novosal <- sal + aumento



   escreval ("Novo salario = R$ " , novosal:4:2)
   escreval ("Aumento = ", aumento:4:2)
   escreval ("Porcentagem = ", porcentagem:3:0, " % ")




fimalgoritmo