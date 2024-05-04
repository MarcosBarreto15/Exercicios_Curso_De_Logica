algoritmo "baskara"

var

a,b,c,x1,x2,delta: real

inicio

    escreva ("Coeficiente a: ")
    leia (a)
    escreva ("Coeficiente b: ")
    leia (b)
    escreva ("Coeficiente c: ")
    leia (c)

    delta <- b^2 - 4 * a * c

    se (a = 0) ou (delta < 0) entao
       escreval ("Esta equacao nao possui raizes reais")
    senao
        x1 <- (-b + raizQ(delta))/2*a
        x2 <- (-b - raizQ(delta))/2*a
        escreval ("X1 = " , x1:2:4)
        escreval ("X2 = ", x2:2:4)
    fimse
 

 




fimalgoritmo