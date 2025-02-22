import math as m

a = int(input("Introdu numarul a: "))
b = int(input("Introdu numarul b: "))
x = int(input("Introdu numarul x: "))

if x <= 5:
    print("Nu se satisface intervalul minim")
else:
    for i in range(x - 5, x + 13):
        Y = m.sqrt(a * b / (a - b + i)) + (m.cos(a) / m.sin(b)) + i
        print(f"Pentru i = {i}, Y = {round(Y)}")