algoritmo "medidas"

//Fazer um programa para ler três medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados
//com quatro casas decimais):
//a) a área do quadrado que tem lado A
//b) a área do triângulo retângulo que base A e altura B
//c) a área do trapézio que tem bases A e B, e altura C

var

 a, b, c, quadrado, tri, tra: real

inicio

   escreva ("Digite a medida A: ")
   leia (a)
   escreva ("Digite a medida B: ")
   leia (b)
   escreva ("Digite a medida C: ")
   leia (c)

   quadrado <- a^2
   tri <- (a * b)/2
   tra <- ((a + b)*c)/2

   escreval ("AREA DO QUADRADO = " , quadrado:4:4)
   escreval ("AREA DO TRIANGULO = " , tri:4:4)
   escreval ("AREA DO TRAPEZIO = " , tra:4:4)




fimalgoritmo