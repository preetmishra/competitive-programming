n, m = map(int, input().split())
matrix = [[] for _ in range(n)]
for i in range(n):
    matrix[i] = list(map(int, input().split()))
 
agg_arr = [[[0 for k in range(5)] for j in range(m)] for i in range(n)]
for i in range(1, n - 1):
    for j in range(1, m - 1):
        agg_arr[i][j][0] = matrix[i - 1][j]
        agg_arr[i][j][1] = matrix[i][j - 1]
        agg_arr[i][j][2] = matrix[i][j]
        agg_arr[i][j][3] = matrix[i + 1][j]
        agg_arr[i][j][4] = matrix[i][j + 1]
        
max_sum = -1
for i in range(1, n - 1):
    for j in range(1, m - 1):
        for a in range(i, n - 1):
            for b in range(1, m - 1):
                if a > i + 2 or a < i - 2 or b > j + 2 or b < j - 2:
                            temp_sum = (agg_arr[i][j][0] * agg_arr[a][b][0]
                                        + agg_arr[i][j][1] * agg_arr[a][b][1]
                                        + agg_arr[i][j][2] * agg_arr[a][b][2]
                                        + agg_arr[i][j][3] * agg_arr[a][b][3]
                                        + agg_arr[i][j][4] * agg_arr[a][b][4])
                            if temp_sum > max_sum:
                                max_sum  = temp_sum
 
print(max_sum)
