mapper = {
    1: ('WS', 11),
    2: ('MS', 9),
    3: ('AS', 7), 
    4: ('AS', 5),
    5: ('MS', 3),
    6: ('WS', 1), 
    7: ('WS', -1),
    8: ('MS', -3),
    9: ('AS', -5), 
    10: ('AS', -7),
    11: ('MS', -9),
    0: ('WS', -11), 
}

for _ in range(int(input())):
    seat_no = int(input())
    mod = seat_no % 12
    print(seat_no + mapper[mod][1], mapper[mod][0])
