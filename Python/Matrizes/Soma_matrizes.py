M = int(input("Qual a quantidade de linhas da matriz? "))
N = int(input("Qual a quantidade de colunas da matriz? "))

A = [[0 for x in range(N)] for x in range(M)]
B = [[0 for x in range(N)] for x in range(M)]
C = [[0 for x in range(N)] for x in range(M)]

print("Digite os valores da matriz A:")

for i in range(0, M):
    for j in range(0, N):
        A[i][j] = int(input(f"Elemento [{i},{j}]: "))


print("Digite os valores da matriz B:")

for i in range(0, M):
    for j in range(0, N):
        B[i][j] = int(input(f"Elemento [{i},{j}]: "))


for i in range(0, M):
    for j in range(0, N):
        C[i][j] =  A[i][j] + B[i][j]


print("MATRIZ SOMA:")

for i in range(0, M):
    for j in range(0, N):
        print(C[i][j], end= "  ")

    print()


