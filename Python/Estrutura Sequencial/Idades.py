nome1: str; nome2: str
idade1: int; idade2: int; soma: int
media: float


print(f"Dados da primeira pessoa: ")
nome1 = str(input("Nome: "))
idade1 = int(input("Idade: "))

print(f"Dados da segunda pessoa: ")
nome2 = str(input("Nome: "))
idade2 = int(input("Idade: "))

soma = idade1 + idade2
media = soma/2

print(f"A idade media de {nome1} e {nome2} é de {media} anos ")