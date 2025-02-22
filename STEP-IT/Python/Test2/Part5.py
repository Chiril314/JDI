import math as m
import random as r

a = r.randint(-100, 100)
b = r.randint(-100, 100)
c = r.randint(-100, 100)
i = r.randint(-100, 100)


print("MENIU")
print("1 - metoda if")
print("2 - metoda if else")
print("3 - metoda if elif else")
print("4 - metoda if else if\n")

key = int(input("Indica metoda: "))

match key:
    case 1:
        W = 3
        if i < 4:
            W = (a / i) + (b * m.pow(i, 2) + c)
        if i >= 4 and i <= 6:
            W = i
        if i > 6:
            W = (a * i) + (b * m.pow(i, 3))

        print(f"pentru a = {a}, b = {b}, c = {c}, i = {i}, raspunsul este {W}")

    case 2:
        if i < 4:
            W = (a / i) + (b * m.pow(i, 2) + c)
            print(f"pentru a = {a}, b = {b}, c = {c} si i < 4, raspunsul este {W}")
        else:
            print(f"pentru i < 4, nu sunt solutii")

        if i >= 4 and i <= 6:
            W = i
            print(f"pentru a = {a}, b = {b}, c = {c} si 4 <= i <= 6, raspunsul este {W}")
        else:
            print(f"pentru 4 <= i <= 6, nu sunt solutii")

        if i > 6:
            W = (a * i) + (b * m.pow(i, 3))
            print(f"pentru a = {a}, b = {b}, c = {c} si i > 6, raspunsul este {W}")
        else:
            print(f"pentru i > 6, nu sunt solutii")

    case 3:
        if i < 4:
            W = (a / i) + (b * m.pow(i, 2) + c)
        elif i >= 4 and i <= 6:
            W = i
        else:
            W = (a * i) + (b * m.pow(i, 3))

        print(f"pentru a = {a}, b = {b}, c = {c}, i = {i} raspunsul este {W}")

    case 4:
        if i < 4:
            W = (a / i) + (b * m.pow(i, 2) + c)
        else:
            if i >= 4 and i <= 6:
                W = i
            else:
                W = (a * i) + (b * m.pow(i, 3))

        print(f"pentru a = {a}, b = {b}, c = {c}, i = {i} raspunsul este {W}")

    case _:
        print("Alege un caz de la 1 la 4")