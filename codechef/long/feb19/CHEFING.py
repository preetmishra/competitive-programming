for _ in range(int(input())) :
    n = int(input())
    l =[]
    for i in range(n) :
        string = input()
        l.append((string, len(string)))
    l.sort(key = lambda x : x[1])
    shortstr = l[0][0]
    base = []
    for i in shortstr :
        if i not in base :
            base.append(i)
    count = 0
    for i in base :
        flag = 0
        for word in l :
            if i not in word[0] :
                flag = 1
                break
        if flag == 0 :
            count += 1
    print(count)