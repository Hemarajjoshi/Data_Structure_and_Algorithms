def isSorted(a):
    l = len(a)
    if l==0 or l ==1:
        return True
    
    if a[0] > a[1]:
        return False
    
    smaller_list = a[1:]
    return isSorted(smaller_list)

a = [1,2,3,4,5]

print(isSorted(a))