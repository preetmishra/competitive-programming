s = input()

i = 0
len_s = len(s)
flag = True

while i <= len_s // 2:
    if s[i] != s[len_s - i - 1]:
        flag = False
        break
    
    i += 1

if flag:
    print('YES')
else:
    print('NO')