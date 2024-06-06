M =int(input("Qual a ordem da matriz? "))


mat = [[0 for x in range(M)] for x in range(M)]

for i in range(0, M):
    for j in range(0, M):
        mat[i][j] = int(input(f"Elemento [{i},{j}]: "))

print("DIAGONAL PRINCIPAL:")

for i in range(0, M):
    for j in range(0, M):
        if i == j:
            print(f"{mat[i][j]} ", end=" ")

negativos = 0

for i in range(0, M):
    for j in range(0, M):
        if mat[i][j] < 0:
            negativos = negativos + 1

print(f"\nQUANTIDADE DE NEGATIVOS = {negativos}")