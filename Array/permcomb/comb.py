


a = [i for i in range(1,8)]
buffer = [None] * 3

def print_comb(a, si, buffer, bi):
    print(buffer)
    # if bi == len(buffer):
    #     print(buffer)
    #     return

    if si == len(a):
        return

    i = si
    while(i < len(a)):
        buffer[bi] = a[i]
        print_comb(a, i + 1, buffer, bi + 1)
        i = i + 1

print_comb(a, 0, buffer, 0)