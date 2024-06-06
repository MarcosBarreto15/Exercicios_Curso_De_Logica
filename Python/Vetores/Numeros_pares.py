N = int(input("Quantos numeros voce vai digitar? "))

vet = [0 for x in range(N)]

for i in range(0, N):
    vet[i] = int(input("Digite um numero: "))


print()
print("NUMEROS PARES:")

cont = 0

for i in range(0, N):
    if vet[i] % 2 == 0:
        cont = cont + 1
        print(vet[i], end= "  ")

print()
print(f"\nQuantidade de pares = {cont}")


