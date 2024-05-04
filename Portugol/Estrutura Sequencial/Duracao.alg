algoritmo "duracao"

//Fazer um programa para ler uma duração de tempo em segundos, daí imprimir na tela esta duração no
//formato horas:minutos:segundos.

var

duracao: inteiro
hr, min, seg: real


inicio

   escreva ("Digite a duracao em segundos: ")
   leia (duracao)
   
   hr <- duracao\3600
   min <- (duracao % 3600)\ 60
   seg <- (duracao % 3600) % 60
   
   escreval (hr , " :", min , " :", seg)




fimalgoritmo