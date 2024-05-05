algoritmo "mais_velho"

var

n, i, maior: inteiro
maisVelho: caractere
nome: vetor[0..99] de caractere
idade: vetor[0..99] de inteiro



inicio


      escreva ("Quantas pessoas voce vai digitar? ")
      leia (n)
      
           para i de 0 ate n - 1 faca
                escreval ("Dados da " , i + 1 , "ª pessoa: ")
                escreva ("Nome: ")
                leia (nome[i])
                escreva ("Idade: ")
                leia (idade[i])
           fimpara
           
           maior <- 0
           
           para i de 0 ate n - 1 faca
                se idade[i] > maior entao
                   maior <- idade[i]
                   maisVelho <- nome[i]
                fimse
           fimpara

           escreval ("PESSOA MAIS VELHA: " , maisVelho)





fimalgoritmo