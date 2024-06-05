N: int; i: int
a: float; b: float; c: float; media: float

N = int(input("Quantos casos voce vai digitar? "))

for i in range(1, N + 1):
    print(f"Digite tres numeros: ")
    a = float(input())
    b = float(input())
    c = float(input())
    media = ((a * 2) + (b * 3) + (c * 5)) / 10
    print(f"MEDIA = {media:.1f}")