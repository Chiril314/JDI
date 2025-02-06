a = int(input("Introduceti punctajul obtinut la evaluare : "))

if a >= 0 and a <= 40:
    print("Ati primit calificativul suficient.")
else:
    if a >= 41 and a <= 60:
        print("Ati primit calificativul bine.")
    else:
        if a >= 61 and a <= 100:
            print("Ati primit calificativul foarte bine.")