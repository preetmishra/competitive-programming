for _ in range(int(input())) :
    n = int(input())
    req = list(map(int, input().split()))
    req = [i - 1 for i in req]
    print(sum(req) + 1)