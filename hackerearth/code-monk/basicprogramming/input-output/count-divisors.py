l, r, k = list(map(int, input().split()))

count = 0

for num in range(l, r + 1):
    if num % k == 0:
        count += 1

print(count)