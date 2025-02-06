ziua = int(input("Introdu ziua saptamanii(de la 1 la 7) : "))

match ziua:
    case 1: print("Luni")
    case 2: print("Marti")
    case 3: print("Miercuri")
    case 4: print("Joi")
    case 5: print("Vineri")
    case 6: print("Sambata")
    case 7: print("Duminica")
    case _: print("Numarul trebuie sa fie de la 1 la 7")