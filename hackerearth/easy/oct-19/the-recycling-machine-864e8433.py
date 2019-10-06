for _ in range(int(input())):
    n, k = list(map(int, input().split()))
    total = 0

    while n >= k:
        count = n // k
        n = count + (n % k)
        total += count

    print(total)