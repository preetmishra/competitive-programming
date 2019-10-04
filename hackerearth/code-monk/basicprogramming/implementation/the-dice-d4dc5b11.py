s = list(input())

invalid = False
count = 0
i = 0
while i < len(s):
    if s[i] != '6':
        count += 1
    elif s[i] == '6':
        count += 1
        i += 1
        try:
            while s[i] == '6':
                i += 1
        except:
            invalid = True
            break
    i += 1

if not invalid:
    print(count)
else:
    print(-1)