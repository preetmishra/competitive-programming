def last_matching(seq, x):
    for idx in range(len(seq) - 1, -1, -1):
        if seq[idx] == x:
            return idx
    
    return -1


sequence = [0, 0]
for i in range(1, 127):
    match = last_matching(sequence[:i], sequence[i])
    if match == -1:
        sequence.append(0)
    else:
        sequence.append(i - match)

count_dikt = {}
for i in range(128):
    count_dikt[i] = sequence[:i+1].count(sequence[i])

for _ in range(int(input())):
    n = int(input()) - 1
    print(count_dikt[n])