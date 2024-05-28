import math

a: float; b: float; c: float; x1 = float; x2 = float; delta: float

a = float(input("Coeficiente a: "))
b = float(input("Coeficiente b: "))
c = float(input("Coeficiente c: "))


delta = math.pow(b, 2.0) - 4 * a * c

if (a == 0) != (delta < 0):
    print(f"Esta equacao nao possui raizes reais")
else:
    x1 = (-b + math.sqrt(delta)) / (2 * a)
    x2 = (-b - math.sqrt(delta)) / (2 * a)
    print(f"X1 = {x1:.4f}")
    print(f"X2 = {x2:.4f}")

