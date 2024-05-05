algoritmo "Problema_alturas"

var

cont, n, i: inteiro
soma, media, porcentagem:   real
nome: vetor [0..9] de caractere
idade: vetor [0..9] de inteiro
alt: vetor [0..9] de real

inicio

escreva ("Quantas pessoas serao digitadas? ")
leia (n)

     para i de 0 ate n - 1 faca

          escreval ("Dados da " , i + 1 ,"ª pessoa: " )
          escreva ("Nome: " )
          leia (nome[i])
          escreva ("Idade: ")
          leia (idade[i])
          escreva ("Altura: ")
          leia (alt[i])
     fimpara
     
     soma <- 0
     para i de 0 ate n - 1 faca
          soma <- soma + alt[i]
     fimpara

          media <- soma / n
          escreval
          escreval ("Altura media: " , media:4:2)
          
          cont <- 0
          para i de 0 ate n - 1 faca
               se idade[i] < 16 entao
                  cont <- cont + 1
               fimse
          fimpara
          
          porcentagem <- cont * 100 / n
          escreval ("Pessoas com menos de 16 anos: " , porcentagem:2:1 , "%")
     
              para i de 0 ate n - 1 faca
                   se idade[i] < 16 entao
                      escreval (nome[i])
                   fimse
              fimpara





fimalgoritmo