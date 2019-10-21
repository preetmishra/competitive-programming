for _ in range(int(input())):
    l, r = map(int, input().split())
    
    if l == r:
        print(l)
        continue

    bin_l = bin(l)[2:]
    bin_r = bin(r)[2:]
    if len(bin_l) < len(bin_r):
        bin_l = ('0' * (len(bin_r) - len(bin_l))) + bin_l
    
    i = 0
    while bin_l[i] == bin_r[i]:
        i += 1

    ans = bin_r[:i] + ('1' * (len(bin_r) - i))
    print(int(ans, 2))

