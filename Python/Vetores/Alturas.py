N = int(input("Quantos numeros voce vai digitar? "))

nome = [0 for x in range(N)]
idade = [0 for x in range(N)]
altura = [0 for x in range(N)]

for i in range(0, N):
    print(f"Dados da { i + 1}a pessoa:")
    nome[i] = str(input("Nome: "))
    idade[i] = int(input("Idade: "))
    altura[i] = float(input("Altura: "))

soma = 0

for i in range(0, N):
    soma = soma + altura[i]

media = soma/N

print()
print(f"Altura média: {media:.2f}")


cont = 0

for i in range(0, N):
    if idade[i] < 16:
        cont = cont + 1
        
percIdade = cont / N * 100

print(f"Pessoas com menos de 16 anos: {percIdade:.1f}%")

for i in range(0, N):
    if idade[i] < 16:
        print(nome[i])
