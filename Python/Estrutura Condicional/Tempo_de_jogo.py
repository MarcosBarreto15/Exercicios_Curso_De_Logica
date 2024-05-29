hi: int; hf: int; duracao: int

hi = int(input("Hora inicial: "))
hf = int(input("Hora final: "))

if hi > hf:
    duracao = 24 - hi + hf

elif hi == hf:
    duracao = 24

else:
    duracao = hf - hi

print(f"O JOGO DUROU {duracao} HORA(S)")
