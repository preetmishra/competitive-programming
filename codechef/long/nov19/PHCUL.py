import math


def euc_dist(a1, b1, a2, b2):
    return math.sqrt((a2 - a1) ** 2 + (b2 - b1) ** 2)
    

for _ in range(int(input())):
    x, y = map(int, input().split())
    n, m, k = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    c = list(map(int, input().split()))
    
    path1 = math.inf
    for i in range(0, n * 2, 2):
        p_a = euc_dist(x, y, a[i], a[i + 1])
        if p_a < path1:
            for j in range(0, m * 2, 2):
                p_a_b = p_a + euc_dist(a[i], a[i + 1], b[j], b[j + 1])
                if p_a_b < path1:
                    for l in range(0, k * 2, 2):
                        p_a_b_c = p_a_b + euc_dist(b[j], b[j + 1], c[l], c[l + 1])
                        if p_a_b_c < path1:
                            path1 = p_a_b_c
    
    path2 = math.inf
    for i in range(0, m * 2, 2):
        p_b = euc_dist(x, y, b[i], b[i + 1])
        if p_b < path2:
            for j in range(0, n * 2, 2):
                p_b_a = p_b + euc_dist(b[i], b[i + 1], a[j], a[j + 1])
                if p_b_a < path2:
                    for l in range(0, k * 2, 2):
                        p_b_a_c = p_b_a + euc_dist(a[j], a[j + 1], c[l], c[l + 1])
                        if p_b_a_c < path2:
                            path2 = p_b_a_c
    
    print(min(path1, path2))
