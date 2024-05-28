preco: float; dinheiro: float; troco: float; valor: float
qtde: int

preco = float(input("Preco unitario do produto: "))
qtde = int(input("Quantidade comprada: "))
dinheiro = float (input("Dinheiro recebido: "))

valor = preco * qtde

if dinheiro < valor:
    falta = valor - dinheiro
    print(f"DINHEIRO INSUFICIENTE, FALTAM {falta:.2f} REAIS")
else:
    troco = dinheiro - valor
    print(f"TROCO = {troco:.2f}")
