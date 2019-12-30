for _ in range(int(input())):
    ans = [0] * 10
    for n in range(int(input())):
        i = 0
        for j in input():
            ans[i] ^= int(j)
            i += 1
    
    print(sum(1 for i in str(ans) if i == '1'))
