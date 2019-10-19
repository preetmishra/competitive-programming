distance = int(input())
oc, of, od = map(int, input().split())
cs, cb, cm, cd = map(int, input().split())

if distance <= of:
    online_cost = oc
else:
    online_cost = oc + ((distance - of) * od)

offline_cost = cb + ((distance // cs) * cm) + (distance * cd)

if online_cost > offline_cost:
    print('Classic Taxi')
else:
    print('Online Taxi')
