primes = [67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113]

for _ in range(int(input())):
    s = input()
    s = [ord(ch) for ch in s]

    for i in range(len(s)):
        minimum = 1000
        nearest_prime_ascii = s[i]
        
        for j in range(len(primes)):
            diff = abs(s[i] - primes[j])
            
            if diff < minimum:
                minimum = diff
                nearest_prime_ascii = primes[j]

        s[i] = nearest_prime_ascii

    print(''.join([chr(ch) for ch in s]))

