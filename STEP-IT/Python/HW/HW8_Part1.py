import math as m

a = int(input("Introdu numarul a: "))
b = int(input("Introdu numarul b: "))
for k in range(-2, 7):
    T = m.pow(b, 2) + (a / 2) + ((m.pow(a, 4) / 4) - (m.pow(b, 6) / 6)) + k
    print(f"Pentru k = {k}, T = {round(T, 2)}")