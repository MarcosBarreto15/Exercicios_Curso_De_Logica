N: int; i: int; x: int; coelho: int; rato: int; sapo: int; total: int
tipo: str
percRato: float; percSapo: float; percCoelho: float



N = int(input("Quantos casos de teste serao digitados? "))

coelho = 0
sapo = 0
rato = 0

for i in range(1, N + 1):
    x = int(input("Quantidade de cobaias: "))
    tipo = str(input("Tipo de cobaia: "))
    if tipo == 'C':
        coelho = coelho + x
    elif tipo == 'R':
        rato = rato + x
    elif tipo == 'S':
        sapo = sapo + x

total = coelho + rato + sapo
percCoelho = coelho / total * 100
percRato = rato / total * 100
percSapo = sapo / total * 100

print(f"RELATORIO FINAL:")
print(f"Total: {total} cobaias")
print(f"Total de coelhos: {coelho}")
print(f"Total de ratos: {rato}")
print(f"Total de sapos: {sapo}")
print(f"Percentual de coelhos: {percCoelho:.2f}")
print(f"Percentual de ratos: {percRato:.2f}")
print(f"Percentual de sapos: {percSapo:.2f}")
