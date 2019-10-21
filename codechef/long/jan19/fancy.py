i = int(input())
while i > 0:
    str = input()
    str = str.split()
    if 'not' in str:
        print("Real Fancy")
    else:
        print("regularly fancy")
    i = i - 1