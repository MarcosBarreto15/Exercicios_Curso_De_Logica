N = int(input("Quantos numeros voce vai digitar? "))

vet = [0 for x in range(N)]

for i in range(0, N):
    vet[i] = float(input("Digite um numero: "))


maior = 0
posicao = 0
for i in range(0, N):
    if vet[i] > maior:
        maior = vet[i]
        posicao = i

print()
print(f"MAIOR VALOR = {maior:.1f}")
print(f"POSICAO DO MAIOR VALOR = {posicao}")