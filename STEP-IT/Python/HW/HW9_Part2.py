sir = input("Introdu un text: ")

cnt1 = 0
cnt2 = 0

check1 = "aeiou"
check2 = "bcdfghjklmnpqrstvwxyz"

for i in sir:
    if i in check1:
        cnt1 += 1

    if i in check2:
        cnt2 += 1

print(f"In textul introdus sunt {cnt1} vocale si {cnt2} consoane.")