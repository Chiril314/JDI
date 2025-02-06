import math

n = int(input("Enter number n: "))
m = int(input("Enter number m: "))

a = 3 + math.pow(n, 2)
b = math.pow(m, a)
c = math.fabs(b + n)

d = math.pow(m + math.pow(n, 2), 1 / 2)
e = math.pow(math.pow(m, 3), 1 / 3)
f = d + e

g = m * math.pow(n, 2)
h = math.pow(math.cos(g), 2)

i = n + 2 * m
j = 2 - math.pow(m, i)

k = c / f
l = h / j

x = k + l

print("X = ", x)
