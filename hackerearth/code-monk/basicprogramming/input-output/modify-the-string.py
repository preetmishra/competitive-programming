s = list(input())

for i in range(len(s)):
    if ord(s[i]) >= 97:
       s[i] = chr(ord(s[i]) - 32) 
    else:
        s[i] = chr(ord(s[i]) + 32)

print(''.join(s))
