N = int(input("Quantos elementos vai ter o vetor? "))

vet = [0 for x in range(N)]

for i in range(0, N):
    vet[i] = int(input("Digite um numero: "))

soma = 0
cont = 0
for i in range(0, N):
    if vet[i] % 2 == 0:
     soma = soma + vet[i]
     cont = cont + 1

if soma == 0:
   print("NENHUM NUMERO PAR")
else:
   media = soma/cont
   print(f"MEDIA DOS PARES = {media:.1f}")