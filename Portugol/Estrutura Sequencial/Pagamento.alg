algoritmo "pagamento"

//Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a
//quantidade de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcionário com
//uma mensagem explicativa, conforme exemplo.



var

 nome: caractere
 valor, pagamento: real
 hr: inteiro



inicio

   escreva ("Nome: ")
   leia (nome)
   escreva ("Valor por hora: ")
   leia (valor)
   escreva ("Horas trabalhadas:")
   leia (hr)

   pagamento <- valor * hr

   escreval ("O pagamento para " , nome , "deve ser " , pagamento:6:2)




fimalgoritmo