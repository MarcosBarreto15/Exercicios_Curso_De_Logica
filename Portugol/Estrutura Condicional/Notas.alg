algoritmo "notas"
//Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de
//uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no
//ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a
//mensagem "REPROVADO", conforme exemplos.

var

n1, n2, nf: real

inicio

escreva ("Digite a primeira nota: ")
leia (n1)
escreva ("Digite a sgunda nota: ")
leia (n2)

nf <- n1 + n2

escreval ("NOTA FINAL = " , nf:2:1)

se nf < 60.00 entao

   escreval ("REPROVADO ")

fimse

fimalgoritmo