N = int(input())
data = [int(x) for x in input().split()]

if data[-1] % 10 == 0:
    print('Yes')
else:
    print('No')
