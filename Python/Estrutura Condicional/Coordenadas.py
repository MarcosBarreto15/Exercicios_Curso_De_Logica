x: float; y: float
 
x = float(input("Valor de X: "))
y = float(input("Valor de Y: "))

if (x > 0) and (y > 0):
    print(f"Q1")

elif (x < 0) and (y > 0):
    print(f"Q2")

elif (x < 0) and (y < 0):
    print(f"Q3")

elif (x > 0) and (y < 0):
    print(f"Q4")

elif (x == 0) and (y == 0):
    print(f"Origem")

elif (y == 0) and (x != 0):
    print(f"Eixo X")

else:
    print(f"Eixo Y")