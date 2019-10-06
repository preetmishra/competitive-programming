a, b, d1, d2 = list(map(int, input().split()))

choc = a // d1
choc *= d2
choc += b

print(choc)