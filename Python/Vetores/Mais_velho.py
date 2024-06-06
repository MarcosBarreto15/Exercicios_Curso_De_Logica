N = int(input("Quantas pessoas voce vai digitar? "))

idade = [0 for x in range(N)]
nome = [0 for x in range(N)]

for i in range(0, N):
    print(f"Dados da {i + 1}a pessoa:")
    nome[i] = str(input("Nome: "))
    idade[i] = int(input("Idade: "))

mais_velho = 0
posicao_maior = 0
for i in range(0, N):
    if idade[i] > mais_velho:
        mais_velho = idade[i]
        posicao_maior = i

print(f"PESSOA MAIS VELHA: {nome[posicao_maior]}")