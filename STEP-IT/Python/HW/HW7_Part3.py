text = input("Introdu un text: ")
caractereInterzise = input("Introdu un text care contine caractere interzise: ")

for i in text:
    k = 0
    for j in caractereInterzise:
        if i == j:
            k = 1
            break

    if k == 1:
        continue
    else:
        print(i, end = "")