N: int; x: int; i: int; dentro: int; fora: int

N = int(input("Quantos numeros voce vai digitar? "))

dentro = 0
fora = 0

for i in range(1, N + 1):
    x = int(input("Digite um numero: "))
    if x >= 10 and x <= 20:
        dentro = dentro + 1
    else:
        fora = fora + 1

print(f"{dentro} DEMTRO")
print(f"{fora} FORA")