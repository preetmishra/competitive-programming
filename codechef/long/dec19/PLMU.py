for _ in range(int(input())):
    n = int(input())
    numbers = list(map(int, input().split()))
    
    twos = sum(1 for num in numbers if num == 2)
    zeros = sum(1 for num in numbers if num == 0)
    ans = ((twos * (twos - 1)) // 2) + ((zeros * (zeros - 1)) // 2)
    
    print(ans)

