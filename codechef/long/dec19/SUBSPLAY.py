for _ in range(int(input())):
    n = int(input())
    string = input()

    count = [[] for ch in range(26)]
    for i, s in enumerate(string):
        count[ord(s) - 97].append(i)
    
    ans = 10 ** 9
    for i in count:
        if len(i) == 0 or len(i) == 1:
            continue
        else:
            for j in range(len(i) - 1):
                if i[j + 1] - i[j] < ans:
                    ans = i[j + 1] - i[j]

    if ans == 10 ** 9:
        print(0)
    else:
        print(n - ans)
