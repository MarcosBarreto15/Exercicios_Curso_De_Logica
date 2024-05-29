a: int; b: int

print(f"Digite dois numeros inteiros:")
a = int(input())
b = int(input())

if (a % b == 0) or (b % a == 0):
    print(f"São multiplos")
else:
    print("Não são multiplos")