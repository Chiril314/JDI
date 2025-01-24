import math as m

a = 5
b = 2
c = 3
x = 1
y = 0.1
l = 1

A = 2 - a + m.pow(b, 2)

B = 2 + m.pow(x, A)

C = m.cos(m.pow(a, B))

D = m.sqrt(C - m.sin(m.pow(y, 2)))

E = m.pow(a, 2) - x + 101 - m.sqrt(m.cos(m.pow(x, 2)))

F = m.pow(l, E) + m.tan(x)

G = m.pow(a, 2 - x)

H = m.sqrt((m.pow(a, 2) - y) / m.pow(b, 2 - x))

I = G * m.pow(b, 2 - a + H)

J = 2 - a + m.pow(x, 2 + a - b)

K = m.cos(m.pow(a, J) + m.pow(b, 2) - c)

L = m.sqrt(D / F)

M = m.sqrt(I / K)

X = L / M

print("X = ", X)
