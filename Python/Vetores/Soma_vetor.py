N = int(input("Quantos numeros voce vai digitar? "))

vet = [0 for x in range(N)]

for i in range(0, N):
    vet[i] = float(input("Digite um numero: "))

print()
print("VALORES = ", end=" ")

for i in range(0, N):
    print(vet[i], end="  ")

soma = 0

for i in range(0, N):
    soma = soma + vet[i]

media = soma/N

print(f"\nSOMA = {soma:.2f}")
print(f"MEDIA = {media:.2f}")

