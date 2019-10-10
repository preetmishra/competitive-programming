def return_cum_sum(arr):
    cum_sum = [0, ]
    for i in range(len(arr)):
        cum_sum.append(cum_sum[-1] + arr[i])

    return cum_sum


n, t = list(map(int, input().split()))
arr = list(map(int, input().split()))

for _ in range(t):
    q, a, b = list(map(int, input().split()))

    cum_sum = return_cum_sum(arr)

    if q == 1:
        arr[a] = b
        cum_sum = return_cum_sum(arr)

    if q == 2:
        print(cum_sum[b + 1] - cum_sum[a])
