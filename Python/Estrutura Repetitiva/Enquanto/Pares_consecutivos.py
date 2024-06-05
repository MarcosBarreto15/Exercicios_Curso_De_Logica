x: int; soma: int; cont: int

x = int(input("Digite um numero inteiro: "))

while x != 0:
    if x % 2 != 0:
        x = x + 1

    cont = 1
    soma = x
    while cont <= 4:
        x = x + 2
        soma = soma  + x
        cont = cont + 1
    print(f"SOMA = {soma}")
    x = int(input("Digite um numero inteiro: "))


