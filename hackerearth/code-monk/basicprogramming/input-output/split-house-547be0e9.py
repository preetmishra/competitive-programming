n = int(input())
s = list(input())

flag = True

if len(s) == 1:
    if s[0] == '.':
        s[0] = 'B'
else:
    for i in range(len(s)):
        if s[i] == 'H':
            if i == 0:
                if s[i + 1] == 'H':
                    flag = False
                    break
            elif i == (len(s) - 1):
                if s[i - 1] == 'H':
                    flag = False
                    break
            elif s[i - 1] == s[i + 1] or s[i - 1] == 'H':
                flag = False
                break
            else:
                pass

        if s[i] == '.':
            s[i] = 'B'

if flag:
    print('YES')
    print(''.join(s))
else:
    print('NO')
