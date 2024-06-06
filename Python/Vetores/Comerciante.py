N = int(input("Serão digitados dados d quantos produtos? "))

nome = [0 for x in range(N)]
compra = [0 for x in range(N)]
venda = [0 for x in range(N)]
lucro = [0 for x in range(N)]

for i in range(0, N):
    print(f"Produto {i + 1}")
    nome[i] = str(input("Nome: "))
    compra[i] = float(input("Preco de compra: "))
    venda[i] = float(input("Preco de venda: "))

for i in range(0, N):
    lucro[i] = (venda[i] - compra[i]) /compra[i] * 100

menor = 0
entre = 0
maior = 0

for i in range(0, N):
    if lucro[i] < 10:
        menor = menor + 1
    elif lucro[i] <= 20:
        entre = entre + 1
    else:
        maior = maior + 1

totCompra = 0
totVenda = 0
LucroTot = 0

for i in range(0, N):
    totCompra = totCompra + compra[i]
    totVenda = totVenda + venda[i]
    LucroTot = totVenda - totCompra

print()
print("RELATORIO:")
print(f"Lucro abaixo de 10%: {menor}")
print(f"Lucro entre 10% e 20%: {entre}")
print(f"Lucro acima de 20%: {maior}")
print(f"Valor total de compra: {totCompra:.2f}")
print(f"Valor total de venda: {totVenda:.2f}")
print(f"Lucro total: {LucroTot:.2f}")