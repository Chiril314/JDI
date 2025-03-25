print("Cum vrei să introduci lista?")
print("1. Manual")
print("2. Aleator")

key = int(input("Alege (1 sau 2): "))
a = []
match key:
    case 1:
        n = int(input("Câte elemente vrei în listă? "))
        for i in range(n):
            n = int(input("Introdu elementul " + str(i + 1) + ": "))
            a.append(n)
    case 2:
        import random
        n = int(input("Câte elemente vrei în listă? "))
        min = int(input("Valoarea minimă: "))
        max = int(input("Valoarea maximă: "))
        for i in range(n):
            a.append(random.randint(min, max))
    case _:
        print("Alegere invalidă!")
        exit()

print("Lista ta:", a)

p = 1
flag = False
for n in a:
    if n > 0 and n % 2 != 0:
        p *= n
        flag = True

if flag:
    print("Produsul elementelor impare pozitive este:", p)
else:
    print("Nu există elemente impare pozitive în listă.")

s = 0
cnt = 0
for i in range(1, len(a), 2):
    s += a[i]
    cnt += 1

if cnt > 0:
    m = s / cnt
    print("Media aritmetică a elementelor de pe poziții pare este:", m)
else:
    print("Nu există elemente pe poziții pare.")








