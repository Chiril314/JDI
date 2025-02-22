x = int(input("Introduceti nota obtinuta(intre 1 si 10): "))

if x >= 9 and x <= 10:
    print("Foarte Bine")
elif x >= 7 and x <= 8:
    print("Bine")
elif x >= 5 and x <= 6:
    print("Satisfacator")
elif x >= 1 and x <= 4:
    print("Insuficient")
else:
    print("Numarul trebuie sa fie intre 1 si 10")