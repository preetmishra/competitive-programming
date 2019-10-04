import string


def encrypt_nums(n, k):
    return str((n + k) % 10)


def encrypt_uppercase(ch, k):
    return chr((((ord(ch) - 65) + k) % 26) + 65)


def encrypt_lowercase(ch, k):
    return chr((((ord(ch) - 97) + k) % 26) + 97)


s = list(input())
k = int(input())

for i in range(len(s)):
    if s[i] in string.ascii_lowercase:
        s[i] = encrypt_lowercase(s[i], k)
    elif s[i] in string.ascii_uppercase:
        s[i] = encrypt_uppercase(s[i], k)
    elif s[i] in '0123456789':
        s[i] = encrypt_nums(int(s[i]), k)
    else:
        pass

print(''.join(s))