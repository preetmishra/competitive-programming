n = int(input())
s = input()
counts = [0] * 7

for i in range(n):
    if s[i] == 'h':
        counts[0] += 1
    elif s[i] == 'a':
        counts[1] += 1
    elif s[i] == 'c':
        counts[2] += 1
    elif s[i] == 'k':
        counts[3] += 1
    elif s[i] == 'e':
        counts[4] += 1
    elif s[i] == 'r':
        counts[5] += 1
    elif s[i] == 't':
        counts[6] += 1

counts[0] //= 2
counts[1] //= 2
counts[4] //= 2
counts[5] //= 2

print(min(counts))
