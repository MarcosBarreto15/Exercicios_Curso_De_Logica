a: float; b: float; c: float; maior: float

print(f"Digite as 3 distancias:")
a = float(input())
b = float(input())
c = float(input())

if (a > b) and (a > c):
    maior = a
elif (b > a) and (b > c):
    maior = b
else:
    maior = c


print(f"MAIOR DISTANCIA = {maior:.2f}")