
def swap(arr,i,j):
    t  = arr[i]
    arr[i] = arr[j]
    arr[j] = t

def dutch(arr, p):
    low = 0
    hi = len(arr) - 1
    i = 0
    while i <= hi:
        if arr[i] < p:
            swap(arr, i, low)
            low = low +1
            i = i + 1
        elif arr[i] > p:
            swap(arr, i, hi)
            hi = hi - 1


    print(arr)

if __name__ == '__main__':
    arr = [1,4,5,4,4,6,2,3]
    dutch(arr, 4)

