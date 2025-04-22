import json, os

fisier = "beneficiari.json"
def incarca_lista():
    if os.path.exists(fisier):
        with open(fisier, "r", encoding = "utf-8") as f:
            try:
                return json.load(f)
            except json.JSONDecodeError:
                return []
    return []

def salvare_lista(lista):
    with open(fisier, "w", encoding = "utf-8") as f:
        json.dump(lista, f, indent = 4)

def afisare_lista(lista):
    if not lista:
        print("Lista este goală.")
        return
    print("| {:<10} | {:<10} | {:<10} | {:<10} |".format("Nume", "Prenume", "Telefon", "Data Plata"))
    print("-" * 55)
    for p in lista:
        data = f'{p["data_plata"]["zi"]:02d}/{p["data_plata"]["luna"]:02d}/{p["data_plata"]["an"]}'
        print("| {:<10} | {:<10} | {:<10} | {:<10} |".format(p["nume"], p["prenume"], p["telefon"], data))

def adauga_informatie(lista):
    while True:
        persoana = {
            "nume": input("Nume: "),
            "prenume": input("Prenume: "),
            "telefon": input("Număr de telefon: "),
            "data_plata": {
                "zi": int(input("Zi plata: ")),
                "luna": int(input("Luna plata: ")),
                "an": int(input("An plata: "))
            }
        }
        lista.append(persoana)
        if input("Doriți să continuați? (d/n): ").lower() != "d":
            break

def cauta_beneficiar(lista):
    tip = input("Căutare după (1) număr de telefon sau (2) nume de familie? ")
    if tip == "1":
        tel = input("Introduceți numărul de telefon: ")
        rezultate = [b for b in lista if b["telefon"] == tel]
    elif tip == "2":
        nume = input("Introduceți numele de familie: ").lower()
        rezultate = [b for b in lista if b["nume"].lower() == nume]
    else:
        print("Opțiune invalidă.")
        return
    afisare_lista(rezultate)
 
def sorteaza_dupa_data(lista):
    return sorted(lista, key = lambda x: (x["data_plata"]["an"], x["data_plata"]["luna"], x["data_plata"]["zi"]), reverse = True)
def elimina_inregistrare(lista):
    tel = input("Introduceți numărul de telefon al înregistrării de șters: ")
    initial = len(lista)
    lista[:] = [b for b in lista if b["telefon"] != tel]
    if len(lista) < initial:
        print("Înregistrare ștearsă cu succes.")
    else:
        print("Nu s-a găsit înregistrarea.")
import os
def meniu():
    lista = incarca_lista()
    while True:
        os.system('clear')
        print("\n--- MENIU ---")
        print("1. Încărcarea listei")
        print("2. Afișarea listei")
        print("3. Salvarea listei în fișier")
        print("4. Adăugarea informației în fișier")
        print("5. Citirea fișierului")
        print("6. Căutare beneficiar")
        print("7. Sortare după data ultimei plăți")
        print("8. Eliminarea unei înregistrări din fișier")
        print("9. Părăsire sistem")
        opt = input("Alege opțiunea: ")

        if opt == "1":
            lista = incarca_lista()
            print("Listă încărcată.")
        elif opt == "2":
            afisare_lista(lista)
        elif opt == "3":
            salvare_lista(lista)
            print("Listă salvată.")
        elif opt == "4":
            adauga_informatie(lista)
        elif opt == "5":
            lista = incarca_lista()
            print("Fișier citit.")
        elif opt == "6":
            cauta_beneficiar(lista)
        elif opt == "7":
            lista = sorteaza_dupa_data(lista)
            print("Listă sortată după data ultimei plăți.")
        elif opt == "8":
            elimina_inregistrare(lista)
        elif opt == "9":
            print("Ieșire...")
            break
        else:
            print("Opțiune invalidă.")
        input("\nApasă Enter pentru a continua...")
meniu()