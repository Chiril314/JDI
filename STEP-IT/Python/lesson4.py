import math as m
import random as r

# b = input("Introduce numele tau: ")
# c = input("Introduceti prenumele tau: ")
# a = int(input("Introduceti anul in care va-ti nascut: "))
#
# print("Dumneavoastra va numiti", b, c, "si aveti", 2025 - a, "ani.")




# a = int(input("Introduce numarul a:"))
# b = int(input("Introduce numarul b:"))
#
#
# print("a + b =",a + b)
# print("a - b =",a - b)
# print("a / b =",a / b)
# print("a * b =",a * b)
# print("a ** b =",a ** b)
# print("b // a =",a // b)
# print("a % b =",a % b)




x = r.randint(1, 10)
y = r.randrange(-10, 10, 2)
A = m.fabs(m.pow(x, 2 + y) + y)
print('x =', x, 'y =', y, 'A =', A)