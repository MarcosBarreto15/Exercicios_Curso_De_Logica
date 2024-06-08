N = int(input("Qual a ordem da matriz? "))

mat = [[0 for x in range(N)] for x in range(N)]

for i in range(0, N):
    for j in range(0, N):
        mat[i][j] = float(input(f"Elemento [{i},{j}]: "))

soma = 0

for i in range(0, N):
    for j in range(0, N):
        if mat[i][j] >= 0:
            soma = soma + mat[i][j]

print()
print(f"SOMA DOS POSITIVOS: {soma:.1f}")

print()
linha = int(input("Escolha uma linha: "))
print("LINHA ESCOLHIDA: ", end= " ")

for i in range(0, N):
    for j in range(0, N):
        if linha == i:
            print(f"{mat[i][j]:.1f}", end= " ")

print()
print()
coluna = int(input("Escolha uma coluna: "))
print("COLUNA ESCOLHIDA: ", end= " ")

for i in range(0, N):
    for j in range(0, N):
        if coluna == j:
            print(f"{mat[i][j]:.1f}", end= " ")


print()
print()
print("DIAGONAL PRINCIPAL: ", end= " ")

for i in range(0, N):
    for j in range(0, N):
        if i == j:
            print(f"{mat[i][j]:.1f}", end= " ")



for i in range(0, N):
    for j in range(0, N):
        if mat[i][j] < 0:
            mat[i][j] = mat[i][j] * mat[i][j]


print()
print()
print("MATRIZ ALTERADA:")

for i in range(0, N):
    for j in range(0, N):
        print(f"{mat[i][j]:.1f}", end=" ")
    print()