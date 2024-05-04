algoritmo "temperatura"

var

temp: caractere
c, f: real

inicio

escreva ("Voce vai digitar a temperatura em qual escala (C/F)? ")
leia (temp)

     se temp = "F" entao
        escreva ("Digite a temperatura em Fahrenheit: ")
        leia (f)
        c <- 5/9*(f-32)
        escreva ("Temperatura equivalente em Celsius: " , c:4:2)
     senao
          escreva ("Digite a temperatura em Celsius: ")
          leia (c)
          f <- c * 9/5 + 32
          escreva ("Temperatura equivalente em Fahrenheit: " , f:4:2)
     fimse

fimalgoritmo
