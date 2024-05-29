c: float; f: float
resposta: str


resposta = str(input("Voce vai digitar a temperatura em qual escala (C/F)? "))

if resposta == 'f':
    f = float(input("Digite a temperatura em Fahrenheit: "))
    c = (f - 32) / 1.8
    print(f"Temperatura equivalente em Celsius: {c:.2f}")
else:
    c = float(input("Digite a temperatura em Celsius: "))
    f =  c * 9 / 5 + 32
    print(f"Temperatura equivalente em Fahrenheit: {f:.2f}")