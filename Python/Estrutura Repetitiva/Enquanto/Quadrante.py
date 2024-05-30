x: int; y: int

print(f"Digite os valores das coordenadas X e Y:")
x = int(input())
y = int(input())

while  (x != 0) and (y != 0):
        if (x > 0) and (y > 0):
            print(f"QUADRANTE Q1")
        elif (x < 0) and (y > 0):
            print(f"QUADRANTE Q2")
        elif (x < 0) and (y < 0):
         print(f"QUADRANTE Q3")
        elif (x > 0) and (y < 0):
         print(f"QUADRANTE Q4")


        print(f"Digite os valores das coordenadas X e Y:")
        x = int(input())
        y = int(input())
    