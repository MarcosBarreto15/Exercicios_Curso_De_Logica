idades: int; soma: int; cont: int
media: float

idades = int(input("Digite as idades: \n"))

if idades < 0:
    print(f"IMPOSSIVEL CALCULAR")
else:
    cont = 0
    soma = 0
    while idades >= 0:
        soma = soma + idades
        cont = cont + 1
        idades = int(input())

    
    media = soma / cont
    print(f"MEDIA = {media:.2f}")




    

    