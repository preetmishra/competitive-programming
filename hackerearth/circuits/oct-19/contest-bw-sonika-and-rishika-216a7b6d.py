def invertor(n): 
    if n == 0: 
        return 1
   
    copy_n = n 
    n |= n >> 1
    n |= n >> 2
    n |= n >> 4
    n |= n >> 8
    n |= n >> 16
  
    return copy_n ^ n 
 

def xnor(a, b): 
    if a < b:
        a, b = b, a
    a = invertor(a) 
      
    return a ^ b


for _ in range(int(input())):
    first, second, n = map(int, input().split())
    
    third = max(first ^ second, xnor(first, second))
    ans = [first, second, third]
    print(ans[(n - 1) % 3])
