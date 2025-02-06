import math as m
import random as r

a = int(input("Introduce numarul a:"))
b = r.randint(5, 17)
c = r.randrange(2, 26, 2)

A = m.sin(m.pow(a, 5) + m.pow(b, 5))
B = 14 + (a * b)
C = B / c
D = m.sqrt(C)
Raspuns = A / D

print("Raspunsul functiei este", round(Raspuns))
print("a =", a)
print("b =", b)
print("c =", c)
print("A =", round(A))
print("B =", round(B))
print("C =", round(C))
print("D =", round(D))
