N: int; i: int; numerador: int; denominador: int
divisao: float


N = int(input("Quantos casos voce vai digitar? "))
for i in range(1, N + 1):
    numerador = int(input("Entre com o numerador: "))
    denominador = int(input("Entre com o denominador: "))
    if denominador == 0:
        print(f"DIVISAO IMPOSSIVEL")
    else:
        divisao = numerador / denominador
        print (f"DIVISAO = {divisao:.2f}")