algoritmo "retangulo"

//Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor
//da área, perímetro e diagonal deste retângulo, com quatro casas decimais, conforme exemplos.

var

b, h, area, perimetro,d: real

inicio

   escreva ("Base do retangulo: ")
   leia (b)
   escreva ("Altura do retangulo: ")
   leia (h)
   area <- b * h
   perimetro <- 2 * (b + h)
   d <- raizq (b^2 + h^2)
   escreval ("AREA = " , area:8:4)
   escreval ("PERIMETRO = " , perimetro:8:4)
   escreval ("DIAGONAL = ",  d:8:4)

fimalgoritmo