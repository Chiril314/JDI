import math as m
import random as r

a = r.randint(-100, 100)
b = r.randint(-100, 100)

print("MENIU")
print("1 - metoda if")
print("2 - metoda if else")
print("3 - metoda if elif else")
print("4 - metoda if else if\n")

key = int(input("Indica metoda: "))

match key:
    case 1:
        B = 3
        if a + b < 10:
            B = m.fabs(m.pow(a, 2) + m.pow(b,2))
        if a + b == 10:
            B = a - b
        if a + b > 10:
            B = m.cos(a) + m.sin(b)

        print(f"pentru a = {a}, b = {b}, raspunsul este {B}")

    case 2:
        if a + b < 10:
            B = m.fabs(m.pow(a, 2) + m.pow(b,2))
            print(f"pentru a = {a}, b = {b}, si a + b < 10, raspunsul este {B}")
        else:
            print(f"pentru a + b < 10, nu sunt solutii")

        if a + b == 10:
            B = a - b
            print(f"pentru a = {a}, b = {b}, si a + b = 10, raspunsul este {B}")
        else:
            print(f"pentru a + b = 10, nu sunt solutii")

        if a + b > 10:
            B = m.cos(a) + m.sin(b)
            print(f"pentru a = {a}, b = {b}, si a + b > 10, raspunsul este {B}")
        else:
            print(f"pentru a + b > 10, nu sunt solutii")

    case 3:
        if a + b < 10:
            B = m.fabs(m.pow(a, 2) + m.pow(b,2))
        elif a + b == 10:
            B = a - b
        else:
            B = m.cos(a) + m.sin(b)

        print(f"pentru a = {a}, b = {b}, raspunsul este {B}")

    case 4:
        if a + b < 10:
            B = m.fabs(m.pow(a, 2) + m.pow(b,2))
        else:
            if a + b == 10:
                B = a - b
            else:
                B = m.cos(a) + m.sin(b)

        print(f"pentru a = {a}, b = {b}, raspunsul este {B}")

    case _:
        print("Alege un caz de la 1 la 4")