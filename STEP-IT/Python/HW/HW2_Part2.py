import math as m

a = 8
b = 2
c = 3
x = 4
y = 5

A = m.pow(x, 3) + m.pow(y, 2) - c
B = m.pow(2 + b, 1 / 3)
C = m.pow(b, B) + c
D = m.sqrt(A / C)

E = a - m.pow(b, 3) + m.pow(m.cos(2 * a), 2)
F = a + b + 1
G = m.sin(m.pow(b, 2))
H = m.pow(a, 2) + m.pow(G, 3)

I = (E / F)
J = m.pow(I / H, 1 / 2)

X = D / J
print("X = ", X)
