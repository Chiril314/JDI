n = int(input("Introduceti numarul n: "))

print("\n")

A = []

S1 = 0
K1 = 0
a = 0
for i in range(n):
    x = int(input(f"Introduceti numarul {i + 1} al listei A: "))
    A.append(x)
    if x > 0:
        S1 += x
        K1 += 1
    a = max(a, x)

print("\n")

B = []

S2 = 0
for i in range(n):
    x = int(input(f"Introduceti numarul {i + 1} al listei B: "))
    B.append(x)
    if x > 0:
        S2 += x

K2 = 0
M2 = B[0]
for i in range(int(n / 2)):
    M2 = min(M2, B[i])
    if B[i] % 2 == 1:
        K2 += 1

M1 = 0
cnt = 0
for i in range(int(n / 2), n):
    if A[i] < 0:
        M1 += A[i]
        cnt += 1

M1 /= cnt
M2 += a
Z = (S1 + S2 + M2) / (K1 * K2) - M1

print("\n")
print(f"Z = {Z}")








