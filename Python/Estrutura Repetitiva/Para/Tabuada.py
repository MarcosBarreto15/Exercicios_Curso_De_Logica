N = int; i = int; produto: int

N = int(input("Deseja a tabuada para qual valor? "))

for i in range(1,11):
    produto = N * i
    print(f"{N} X {i} = {produto}")