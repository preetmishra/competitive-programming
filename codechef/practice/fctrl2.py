t = int(input())
lst = list()
def fact(n) :
    if n == 0 :
        return 1
    else :
        return n * fact(n - 1)
for i in range(t) :
    x = int(input())
    lst.append(fact(x))
for i in lst :
    print(i)
    