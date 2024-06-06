N = int(input("Quantos alunos serão digitados? "))

nota1 = [0 for x in range(N)]
nota2 = [0 for x in range(N)]
nome = [0 for x in range(N)]


for i in range(0, N):
    print(f"Digite nome, primeira e segunda nota do {i + 1}o aluno:")
    nome[i] = str(input())
    nota1[i] = float(input())
    nota2[i] = float(input())
    
print("Alunos aprovados:")


for i in range(0, N):
    media = (nota1[i] + nota2[i]) / 2

    if media >= 6.0:
        print(nome[i])


