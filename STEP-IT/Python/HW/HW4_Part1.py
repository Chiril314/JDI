import math as m
import random as r

a = 52
b = int(input("Introduce numarul b:"))
c = r.randint(5, 15)
x = 3
y = r.randrange(2, 20, 2)

A = (m.pow(a, 2) - y) / m.pow(b, 2 - x)
B = 2 - a + m.sqrt(A)
C = m.pow(a, 2 - x) * m.pow(b, B)

D = 2 - a + m.pow(x, 2 + a - b)
E = m.cos(m.pow(a, D) + m.pow(b, 2) - c)

Ans = m.sqrt(C / E)
print("Valoarea expresiei este", Ans)