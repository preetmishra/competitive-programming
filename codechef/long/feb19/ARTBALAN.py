for _ in range(int(input())) :
    l = input()
    final_list = []
    dikt = {}
    for i in l :
        if i not in dikt :
            dikt[i] = 1
        else:
            dikt[i] += 1
    freq = [dikt[i] for i in dikt]
    string_len = len(l)
    for i in range(26-len(freq)) :
        freq.append(0)
    freq.sort() 
    for dis in range(1, 27) :
        if string_len % dis == 0 :
            ans = 0
            itr = 25
            req_pair_size = string_len // dis
            limit = 25 - dis 
            while itr > limit :
                if freq[itr] > req_pair_size :
                    ans += freq[itr] - req_pair_size
                itr -= 1
            while itr >= 0 :
                ans += freq[itr]
                itr -= 1
            final_list.append(ans)
    print(min(final_list))