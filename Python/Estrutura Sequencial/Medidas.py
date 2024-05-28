import math

a: float; b: float; c: float; areaQuad: float; areaTri: float; areaTrap: float

a = float(input("Digite a media A: "))
b = float(input("Digite a media B: "))
c = float(input("Digite a media C: "))


areaQuad = math.pow(a, 2.0)
areaTri = (a * b) / 2
areaTrap = ((a + b) * c) / 2

print(f"AREA DO QUADRADO = {areaQuad:.4F}")
print(f"AREA DO TRIANGULO = {areaTri:.4F}")
print(f"AREA DO TRAPEZIO = {areaTrap:.4F}")

