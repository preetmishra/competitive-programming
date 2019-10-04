n, t = list(map(int, input().split()))
arr = list(map(int, input().split()))

cum_sum = [0, ]

for i in range(n):
    cum_sum.append(cum_sum[i] + arr[i])

for _ in range(t):
    l, r = list(map(int, input().split()))
    floor_avg = (cum_sum[r] - cum_sum[l - 1]) // (r - l + 1)

    print(floor_avg)
