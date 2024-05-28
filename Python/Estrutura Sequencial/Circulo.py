import math


raio: float; area: float

raio = float(input("Digite o valor do raio: "))

area = math.pow(raio, 2.0) * 3.14159

print(f"AREA = {area:.3f}")