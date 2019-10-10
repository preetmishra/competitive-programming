days = ['MONDAY', 'TUESDAY', 'WEDNESDAY', 'THURSDAY', 'FRIDAY', 'SATURDAY', 'SUNDAY']

for _ in range(int(input())):
    k = int(input())
    schedule = list(map(int, input().split()))

    work_per_week = sum(i for i in schedule)
    k = k % work_per_week

    if k == 0:
        for i in range(6, -1, -1):
            if schedule[i] != 0:
                print(days[i])
                break
    else:
        i = 0
        while k > 0:
            k -= schedule[i]
            i += 1

        print(days[i - 1])
