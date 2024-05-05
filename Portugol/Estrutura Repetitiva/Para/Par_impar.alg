algoritmo "par_impar"

var

   n, i, x: inteiro



inicio

   escreva ("Quantos numeros voce vai digitar? ")
   leia (n)
   
        para i de 1 ate n faca
              escreva ("Digite um numero: ")
              leia (x)
              
                   se x <> 0 entao
                      se (x mod 2 = 0) e (x <>0) entao
                          escreva (" PAR ")
                      senao
                           escreva ("IMPAR ")
                      fimse
                      
                      se x > 0 entao
                         escreva ("POSITIVO ")
                      senao
                           se x < 0 entao
                              escreva (" NEGATIVO ")

                         fimse
                      fimse
                      
                    senao
                         escreva (" NULO ")
                    fimse
              escreval
              
        fimpara




fimalgoritmo