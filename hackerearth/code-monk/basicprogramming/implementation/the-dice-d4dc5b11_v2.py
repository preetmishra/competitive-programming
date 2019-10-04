s = list(input())

count = 0
for i in s:
    if i != '6':
        count += 1

if s[-1] == '6':
    print(-1)
else:
    print(count)