x, k = list(map(int, input().split()))
x = list(str(x))

i = 0
while i < k:
    if x[i] == '9':
        i += 1
        k += 1
        continue
    x[i] = '9'
    i += 1

print(''.join(x))
