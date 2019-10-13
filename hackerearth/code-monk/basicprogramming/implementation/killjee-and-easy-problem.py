ans = []


def dfs(vertex, visited, current):
    if visited[current]:
        return

    ans.append(current)
    visited[current] = True
    for i in vertex[current]:
        if not visited[i]:
            dfs(vertex, visited, i)
            ans.append(current)


n, m = map(int, input().split())

vertex = [[] for i in range(n + 1)]
for _ in range(m):
    a, b = map(int, input().split())
    vertex[a].append(b)
    vertex[b].append(a)

visited = [0] * (n + 1)
dfs(vertex, visited, 1)
print(len(ans))
print(*ans)
