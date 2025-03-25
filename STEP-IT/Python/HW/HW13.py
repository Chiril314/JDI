stoc = []
nStoc = []

flag = 0
while input("\nDoriti sa modificati produsele din stoc?(y/n): ") == 'y':
    import os
    os.system('clear')

    if flag != 0:
        print("Stoc:")
        for i in range(len(stoc)):
            print(f"{stoc[i]} - {nStoc[i]}")
    else:
        flag = 1

    produs = input("\nIntroduceti numele produsului pe care doriti sa-l modificati: ")
    index = -1
    for i in range(len(stoc)):
        if stoc[i] == produs:
            index = i

    if input("\nDoriti sa adaugati acest produs in stoc?(y/n): ") == 'y':
        cantitate = int(input("\nIntroduceti cantitatea: "))

        if index == -1:
            stoc.append(produs)
            nStoc.append(cantitate)
        else:
            nStoc[index] += cantitate
    else:
        if index == -1:
            print("\nNu exista asa produs")
        else:
            cantitate = 0
            while True:
                cantitate = int(input(f"\nIntroduceti cantitatea(mai mic sau egal decat {nStoc[index]}): "))

                if cantitate > nStoc[index]:
                    print("\nAti introdus o cantitate mai mare decat cea disponibila in stoc")
                else:
                    break


            if nStoc[index] > cantitate:
                nStoc[index] -= cantitate
            else:
                stoc.remove(stoc[index])
                nStoc.remove(nStoc[index])

import os
os.system('clear')

print("Stoc:")
for i in range(len(stoc)):
    print(f"{stoc[i]} - {nStoc[i]}")


