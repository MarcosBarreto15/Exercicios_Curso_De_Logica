N = int(input("Quantas pessoas serao digitados? "))

altura = [0 for x in range(N)]
genero = [0 for x in range(N)]

for i in range(0, N):
    altura[i] = float(input(f"Altura da {i + 1}a pessoa: "))
    genero[i] = str(input(f"Genero da {i + 1}a pessoa: "))

menor = i
maior = 0

for i in range(0, N):
    if altura[i] < menor :
        menor = altura[i]
    
    if altura[i] > maior:
        maior = altura[i]

contHomens = 0
contMulheres = 0
soma = 0

for i in range(0, N):
    if genero[i] == 'M':
        contHomens = contHomens + 1
    else:
        contMulheres = contMulheres + 1
        soma = soma + altura[i]

media = soma / contMulheres

print(f"Menor altura = {menor:.2f}")
print(f"Maior altura = {maior:.2f}")
print(f"Media de altura das mulheres = {media:.2f}")
print(f"Numero de homens = {contHomens}")
