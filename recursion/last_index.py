def last_index(arr, x, start):
    if len(arr) == 0:
        return -1
    if arr[start] ==x:
        return start
    return last_index(arr, x, start-1)


arr = [1, 2, 3, 4, 5, 6, 7,4, 8, 9, 10,2]

print(last_index(arr, 10, len(arr)-1))
print(last_index(arr, 4, len(arr)-1))