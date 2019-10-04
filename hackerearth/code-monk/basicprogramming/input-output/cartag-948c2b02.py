s = list(input())

vowels = set('AEIOUY')
ch = s[2]
s[2] = s[6] = 0
s = [int(i) for i in s]

if ch in vowels:
    print('invalid')
elif (s[0] + s[1]) % 2 != 0:
    print('invalid')
elif (s[3] + s[4]) % 2 != 0:
    print('invalid')
elif (s[4] + s[5]) % 2 != 0:
    print('invalid')
elif (s[7] + s[8]) % 2 != 0:
    print('invalid')
else:
    print('valid')