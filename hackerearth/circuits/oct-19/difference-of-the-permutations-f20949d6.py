from math import factorial


for _ in range(int(input())):
    n = int(input())
    
    times = factorial(n)
    ind_x = (n * n) - ((n * (n + 1)) // 2)
    
    print(ind_x * times)