mail = input('indica un mail: ')

if mail.count('@') == 1 and mail[0] != '@' and mail[-1] != '@' and ' ' not in mail and mail.count('.') > 0 and len(mail) <= 256:
    print('validare 1, ok')

    k, s = mail.split('@')
    if k[0].isalnum() and k[-1].isalnum():
        print('validare 2, ok')
    else:
        print('validare 2, esuata')

    if s[0].isalnum() and s[-1].isalnum() and '.' in s:
        print('validare 3, ok')
    else:
        print('validare 3, esuata')

    div = s.split('.')
    ok = 1
    for i in div:
        if len(i) > 1 and len(i) < 60 and i[0] != '-' and i[-1] != '-':
            for j in i:
                if j.isalnum() or j[i] == '-':
                    continue
                else:
                    ok = 0
                    break
    if ok == 1:
        print('validare 4, ok')
    else:
        print('validare 4, esuata')
else:
    print('validare 1, esuata')