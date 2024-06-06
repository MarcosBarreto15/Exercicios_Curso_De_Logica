N = int(input("Quantos elementos vai ter o vetor? "))

vet = [0 for x in range(N)]

for i in range(0, N):
    vet[i] = float(input("Digite um numero: "))

soma = 0

for i in range(0, N):
    soma = soma + vet[i]

media = soma / N

print()
print(f"MEDIA DO VETOR = {media:.3f}")

print ("ELEMENTOS ABAIXO DA MEDIA: ")

for i in range(0, N):
    if vet[i] < media:
        print(vet[i])
