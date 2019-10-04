import string
import random


def naive(a, b):
        count = 0

        for ch in string.ascii_lowercase:
            count += abs(a.count(ch) - b.count(ch))

        return count


def optimized(a, b):
    dikt = {}
    flag_dikt = {}
 
    for ch in a:
        if ch in dikt:
            dikt[ch] += 1
        else:
            dikt[ch] = 1
 
    for ch in b:
        if ch in dikt:
            if dikt[ch] == 0:
                flag_dikt[ch] = True
                
            try:
                if flag_dikt[ch]:
                    dikt[ch] += 1
            except:
                dikt[ch] -= 1
        else:
            dikt[ch] = 1
            flag_dikt[ch] = True
 
    count = sum(abs(val) for val in dikt.values() if val != 0)
 
    return count


def randomword(length):
   letters = string.ascii_lowercase
   return ''.join(random.choice(letters) for i in range(length))


count = 0

while count < 100000:
    a = randomword(random.randint(1, 100))
    b = randomword(random.randint(1, 100))

    if optimized(a, b) != naive(a, b):
        print(a, b)
        print(optimized(a, b))
        print(naive(a, b))

    count += 1
