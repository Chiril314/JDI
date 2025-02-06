nume = 'Chiril'
prenume = 'Placinta'
an = input("Anul nasterii(ex: 1997) : ")
luna = input("Luna nasterii(ex: 07) : ")
ziua = input("Ziua nasterii(ex: 03) : ")
anlunaziua = (an + ' / ' + luna + ' / ' + ziua)

print('|------------------|')
print('|  NUME  | PRENUME |')
print('|--------+---------|')
print(f'|{nume:^8}|{prenume:<9}|')
print('|--------+---------|')
print('|  DATA  NASTERII  |')
print('|--------+---------|')
print(f'|{anlunaziua:^18}|')
print('|------------------|')