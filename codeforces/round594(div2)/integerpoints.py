def count_even_odd(ls):
    even, odd = 0, 0
    for i in ls:
        if i % 2 == 0:
            even += 1
        else:
            odd += 1

    return (even, odd)


for _ in range(int(input())):
    p = int(input())
    ps = list(map(int, input().split()))
    q = int(input())
    qs = list(map(int, input().split()))

    even_p, odd_p = count_even_odd(ps)
    even_q, odd_q = count_even_odd(qs)
    
    print((even_p * even_q) + (odd_p * odd_q))
