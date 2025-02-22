x = int(input("Introdu numarul: "))

if x >= 1 and x <= 10:
    print("Interval 1-10")
elif x >= 11 and x <= 20:
    print("Interval 11-20")
elif x >= 21 and x <= 30:
    print("Interval 21-30")
elif x >= 31 or x <= 0:
    print("Număr în afara intervalelor")