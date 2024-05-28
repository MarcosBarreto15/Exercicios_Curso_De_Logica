duracao: int; minutos: float; segundos: float; horas: float

duracao = int(input("Digite a duracao em segundos: "))

horas = duracao // 3600
minutos = (duracao % 3600) // 60
segundos = (duracao % 3600) % 60

print(f"{horas}:{minutos}:{segundos}")