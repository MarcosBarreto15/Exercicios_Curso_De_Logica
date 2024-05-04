algoritmo "consumo"

//Fazer um programa para ler a distância total (em km) percorrida por um carro, bem como o total de
//combustível gasto por este carro ao percorrer tal distância. Seu programa deve mostrar o consumo
//médio do carro, com três casas decimais.

var

km, comb, consumo: real

inicio

   escreva ("Distancia percorrida: ")
   leia (km)
   escreva("Combustível gasto: ")
   leia (comb)

   consumo <- km/comb

   escreval ("Consumo medio = " , consumo:4:3)


fimalgoritmo
