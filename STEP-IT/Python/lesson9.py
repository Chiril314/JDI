import math as m

while True:
    print("\n\nMENIU")
    print("1. metoda for")
    print("2. metoda while")
    print("3. parasire sistem\n")

    key = int(input("Introdu varianta: "))
    i = 0
    s = 0

    match key:
        case 1:
            b = int(input("\nIntrodu numarul b: "))
            for a in range(2, 9):
                F = m.fabs(a + m.pow(b, 2))
                i += 1
                s += F
                print(f"{i}. F = {F}")

        case 2:
            a = 2
            b = int(input("\nIntrodu numarul b: "))
            while a < 9:
                F = m.fabs(a + m.pow(b, 2))
                i += 1
                a += 1
                s += F
                print(f"{i}. F = {F}")

        case 3: exit(0)

        case _:
            print("Indicati o valoare de la 1 la 3")
            input("Tasteaza o tasta pentru a continua: ")

    if key in (1, 2):
        print("--------------------------")
        print(f"Total iteratii {i}, suma = {s}")