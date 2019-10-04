def solve(A):
    num = ''

    for i in range(len(A) // 2):
        num += A[i][0]

    for i in range(len(A) // 2, len(A)):
        num += A[i][-1]

    if int(num) % 11 == 0:
        return 'OUI'
    else:
        return 'NON'


N = int(input())
A = list(map(str, input().split()))

out_ = solve(A)
print(out_)