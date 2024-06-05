N: int; fatorial: int; i: int

fatorial = 1

N = int(input("Digite o valor de N: "))
for i in range(1, N + 1):
    fatorial = fatorial * i

print(f"FATORIAL = {fatorial}")
    

