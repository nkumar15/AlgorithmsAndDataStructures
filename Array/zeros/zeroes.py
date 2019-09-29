
def swap(arr,i,j):
    t  = arr[i]
    arr[i] = arr[j]
    arr[j] = t


def move_zeroes_front(arr):
    zi = 0
    for i in range(len(arr)):
        if arr[i] == 0:
            swap(arr, i ,zi)
            zi = zi + 1
    print(arr)


if __name__ == '__main__':
    arr = [1,2,0,4,6,0,5,0]
    move_zeroes_front(arr)

    arr = []
    move_zeroes_front(arr)

    arr = [1]
    move_zeroes_front(arr)
