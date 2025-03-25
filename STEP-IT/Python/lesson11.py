sir = input("Introdu un text: ")

cntMaj = 0
cntMin = 0
for i in sir:
    if i.isupper():
        cntMaj += 1
    elif i.islower():
        cntMin += 1

if cntMin > cntMaj:
    sirNou = ""
    for i in sir:
        if i.isupper():
            sirNou += i.lower()
        elif i.islower():
            sirNou += i.upper()
        else:
            sirNou += i
    sir = sirNou
elif cntMin < cntMaj:
    sir = sir.title()
else:
    sir = sir[::-1]

print(sir)











