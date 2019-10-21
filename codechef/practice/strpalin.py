t = int(input())
for _ in range(t) :
    a = list(input())
    b = list(input())
    d = dict()
    for i in a :
        if i not in d :
            d[i] = 1
    for i in b :
        if i in d :
            d[i] += 1
    # print(d)
    s = sorted(d.values(), reverse = True)
    if s[0] > 1 :
        print("Yes")
    else :
        print("No")
    

