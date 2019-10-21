t = int(input())
lst2 = list()
for i in range(t):
    x = int(input())
    lst = []
    while x > 0 :
        n = x % 10
        lst.append(n)
        x = x // 10
    sum1 = lst[0] + lst[-1]
    lst2.append(sum1)
for i in lst2 :
    print(i)