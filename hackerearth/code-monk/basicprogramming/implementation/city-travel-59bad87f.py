import math


totalkms, x, exceptions = map(int, input().split())
schedule = []
for _ in range(exceptions):
    idx, y = map(int, input().split())
    schedule.append((idx, y))
schedule.sort()

count = 0
pre_exc_day = 0
for i in range(exceptions):
    if totalkms > ((schedule[i][0] - pre_exc_day - 1) * x + schedule[i][1]):
        totalkms -= ((schedule[i][0] - pre_exc_day - 1) * x + schedule[i][1])
        count += schedule[i][0] - pre_exc_day
        pre_exc_day = schedule[i][0]
    else:
        if totalkms > (schedule[i][0] - pre_exc_day - 1) * x:
            totalkms -= schedule[i][1]
            count += 1
            if totalkms > 0:
                count += math.ceil(totalkms / x)
                totalkms = 0
        else:
            count += math.ceil(totalkms / x)
            totalkms = 0
        break
if totalkms > 0:
    count += math.ceil(totalkms / x)

print(count)
