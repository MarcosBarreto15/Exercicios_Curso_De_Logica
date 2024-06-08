M = int(input("Qual a ordem da matriz? "))

mat = [[0 for x in range(M)] for x in range(M)]

for i in range(0, M):
    for j in range(0, M):
        mat[i][j] = int(input(f"Elemento [{i},{j}]: "))

print("MAIOR ELEMENTO DE CADA LINHA:")

maiorLinha = [0 for x in range(M)]

for i in range(0, M):
    maior = 0
    for j in range(0, M):
        if mat[i][j] > maior:
            maior = mat[i][j]

    maiorLinha[i] = maior
    
for i in range(0, M):
    print(maiorLinha[i])



    