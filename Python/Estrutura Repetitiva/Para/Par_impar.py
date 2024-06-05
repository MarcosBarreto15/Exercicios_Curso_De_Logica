N: int; i: int; x: int

N = int(input("Quantos numeros voce vai digitar? "))

for i in range (1, N + 1):
    x = int(input("Digite um numero: "))
    if x % 2 == 0 and x != 0:
        print(f"PAR ", end="")
    elif x % 2 != 0 and x != 0:
        print(f"IMPAR ", end="")
    elif x == 0:
        print(f"NULO")

    if x > 0:
        print(f"POSITIVO")
    elif x < 0:
        print(f"NEGATIVO")

            