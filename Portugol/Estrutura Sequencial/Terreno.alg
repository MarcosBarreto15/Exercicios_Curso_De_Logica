algoritmo "terreno"
//Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma
//casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida,
//o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com
//duas casas decimais, conforme exemplo.
var
l, c, valor, preco, area: real

inicio
   escreva ("Digite a largura do terreno:")
   leia (l)
   escreva ("Digite o comprimento do terreno:")
   leia (c)
   escreva ("Digite o valor do metro quadrado:")
   leia (valor)
   area <- l * c
   preco <-  area * valor
   escreval ("Area do terreno = " , area:4:2)
   escreval ("Preco do terreno = " , preco:4:2)


fimalgoritmo
