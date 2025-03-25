import random as r
h = []
g = []
n = int(input('indica lungimea listei x: '))
for _ in range(n):
    h.append(r.randint(-20,20))
print(f'h = {h}')

i = 0
while True:
    g.append(int(input(f'y[{i}] = ')))
    i += 1
    if input('doriti sa continuati (y/n): ') == 'n':
        break
print(f'g = {g}')
s1 = 0
k2 = 0
for i in range(int(n / 2)):
    s1 += h[i]
    if h[i] % 3 == 0:
        k2 += 1

for i in range(int(len(g) / 2), len(g)):
    s1 += g[i]
k1 = 0
m1 = h[int(n / 2)]
for i in range(int(n / 2), n):
    if h[i] > 0:
        k1 += 1

    if h[i] > m1:
        m1 = h[i]
cnt = 0
m2 = 0
for i in range(n):
    if i % 2 == 0 and h[i] % 2 == 0:
        m2 += h[i]
        cnt += 1
for i in range(len(g)):
    if i % 2 == 0 and g[i] % 2 == 0:
        m2 += g[i]
        cnt += 1
m2 /= cnt
m = g[0]
for i in range(int(len(g) / 2)):
    if g[i] % 3 == 0:
        k2 += 1

    if g[i] > m:
        m = g[i]

m1 += m
d = (2 * s1) + (3 * int(m2)) - (2 * (k1 - k2)) + m1
print(d)