import math as m
import random as r

x = r.randint(-100, 100)
y = r.randint(-100, 100)

print("MENIU")
print("1 - metoda if")
print("2 - metoda if else")
print("3 - metoda if elif else\n")

key = int(input("Indica metoda: "))

match key:
    case 1:
        A = 3
        if y < 0:
            A = m.pow(x, 2) + y
        if y == 0:
            A = m.fabs(x + y) - 2
        if y > 0:
            A = m.sqrt(x + m.pow(y, 2))

        print(f"pentru y = {y}, x = {x}, raspunsul este {A}")

    case 2:
        if y < 0:
            A = m.pow(x, 2) + y
            print(f"pentru y = {y} > 0, x = {x}, raspunsul este {A}")
        else:
            print(f"pentru y = {y} > 0, nu sunt solutii")

        if y == 0:
            A = m.fabs(x + y) - 2
            print(f"pentru y = {y} = 0, x = {x}, raspunsul este {A}")
        else:
            print(f"pentru y = {y} = 0, nu sunt solutii")

        if y > 0:
            A = m.sqrt(x + m.pow(y, 2))
            print(f"pentru y = {y} > 0, x = {x}, raspunsul este {A}")
        else:
            print(f"pentru y = {y} > 0, nu sunt solutii")

    case 3:
        if y < 0:
            A = m.pow(x, 2) + y
        elif y == 0:
            A = m.fabs(x + y) - 2
        else:
            A = m.sqrt(x + m.pow(y, 2))

        print(f"pentru y = {y}, x = {x}, raspunsul este {A}")

    case _:
        print("Alege un caz de la 1 la 3")