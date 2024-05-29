codigo: int; qtde: int
valor: float

codigo = int(input("Codigo do produto comprado: "))
qtde = int(input("Quantidade comprada: "))

if codigo == 1:
    valor = qtde * 5.00

elif codigo == 2:
    valor = qtde * 3.50

elif codigo == 3:
    valor = qtde * 4.80

elif codigo == 4:
    valor = qtde * 8.90

elif codigo == 5:
    valor = qtde * 7.32


print(f"Valor a pagar: R$ {valor:.2f}")