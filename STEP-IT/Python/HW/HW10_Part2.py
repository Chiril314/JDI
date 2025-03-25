telefon = input("Introdu numarul de telefon: ")
telefon = telefon.replace(" ", "").replace("-","")

numere = "0123456789"
cnt = 0
for i in telefon:
    if i in numere:
        cnt += 1

if cnt == 9 and (telefon.startswith('06') or telefon.startswith('07')):
    ok = 1
    for i in telefon:
        if i not in numere:
            print("Numar invalid")
            ok = 0
            break
    if ok == 1:
        print("Numar existent")
elif cnt == 11 and (telefon.startswith("+3736") or (telefon.startswith("+3737"))):
    ok = 1
    for i in range(5, len(telefon)):
        if telefon[i] not in numere:
            print("Numar invalid")
            ok = 0
            break
    if ok == 1:
        print("Numar existent")
else:
    print("Numar invalid")