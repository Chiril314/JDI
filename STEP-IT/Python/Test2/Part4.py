x = input("Introdu ziua saptamanii(Ex: Luni, Marti, ...): ")

match x:
    case "Luni":
        print("Lucrătoare")
    case "Marti":
        print("Lucrătoare")
    case "Miercuri":
        print("Lucrătoare")
    case "Joi":
        print("Lucrătoare")
    case "Vineri":
        print("Lucrătoare")
    case "Sambata":
        print("Weekend")
    case "Duminica":
        print("Weekend")
    case _:
        print("Zi invalidă")