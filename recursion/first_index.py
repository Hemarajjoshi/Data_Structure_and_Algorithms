'''
Givent the list of arrrays of length n and the integer of x , we need to find the first
index of the given integer x and return the index if the integer is not present then 
return -1.
'''

def first_index(arr, x, start):
    if len(arr) == 0: 
        return -1
    if arr[start] == x:
        return start
    return first_index(arr, x, start+1)

arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10,2]
arr1 = [1, 2, 3, 4, 5, 6, 7, 6,7]

print(first_index(arr, 1, 0))
print(first_index(arr1, 7, 0))
