def balloons_needed(a, b, candies):
    need = 0
    for i in range(len(a)):
        if b[i] == 0:
            continue
        need += max(0, a[i] - (candies // b[i]))
    
    return need


n, m = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

r = 0
for i in range(n):
    r = max(r, a[i] * b[i])

l = 0
while l < r:
    mid = (l + r) // 2
    balloons = balloons_needed(a, b, mid)
    if balloons <= m:
        r = mid
    else:
        l = mid + 1
    
print(l)