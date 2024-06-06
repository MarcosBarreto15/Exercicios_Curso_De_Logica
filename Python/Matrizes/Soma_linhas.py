M = int(input("Qual a quantidade de linhas da matriz? "))
N = int(input("Qual a quantidade de colunas da matriz? "))

mat = [[0 for x in range(N)] for x in range(M)]

for i in range(0, M):
    print(f"Digite os elementos da {i + 1}a. linha:")
    for j in range(0, N):
        mat[i][j] = float(input())


vet = [0 for x in range(M)]


for i in range(0, M):
    soma = 0

    for j in range(0, N):
        soma = soma + mat[i][j]
    vet[i] = soma
    

print("VETOR GERADO")

for i in range(0, M):
    print(f"{vet[i]:.1f}")