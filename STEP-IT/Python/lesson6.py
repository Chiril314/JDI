import random as r

a = r.randrange(0, 80)

if a >= 18:
    print(f"{a}, ai majoratul")
elif a >= 13:
    print(f"{a}, esti adolescent")
else:
    print(f"{a}, esti copil")