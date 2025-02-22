import math as ma

a = int(input('indica a: '))
b = int(input('indica b: '))
x = int(input('indica x: '))
y = int(input('indica y: '))

if ma.fabs(y * (a + b)) - x >= 11:
    key = input('metoda for sau while (f/w): ')

    if key == 'f':
        for m in range(x, int(ma.fabs(y * (a + b)))):
            R = ma.fabs(ma.pow(a, b + m)) - ma.fabs(3 + (ma.pow(b, 2) / 5))
            print(f'R={R}')
    elif key == 'w':
        m = x
        while m < int(ma.fabs(y * (a + b))):
            R = ma.fabs(ma.pow(a, b + m)) - ma.fabs(3 + (ma.pow(b, 2) / 5))
            print(f'R={R}')
            m += 1
    else:
        print('nu ati indicat o varianta acceptabila. Indicati f/w')

else:
    print('nu se satisface intervalul minim')