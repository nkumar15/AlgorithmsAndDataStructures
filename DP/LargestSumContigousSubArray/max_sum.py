



def max_sum(arr):
    length = len(arr)

    if length == 0:
        return []

    max_sum_so_far = arr[0]
    if length == 1:
        return max_sum_so_far

    i = 1
    while i < length:
        max_sum_here = max_sum_so_far + arr[i]
        max_sum_so_far = max(max_sum_so_far, max_sum_here)
        i += 1

    print(max_sum_so_far)


arr = [-2, -3, 4, -1, -2, 1, 5, -3]
max_sum(arr)