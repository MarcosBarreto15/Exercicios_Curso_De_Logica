preco: float; dinheiro: float; troco: float
qtde: int

preco = float(input("Preço unitário do produto: "))
qtde = int(input("Quantidade comprada: "))
dinheiro = float(input("Dinheiro recebido: "))


troco = dinheiro - (preco * qtde)


print(f"TROCO: {troco:.2f}")