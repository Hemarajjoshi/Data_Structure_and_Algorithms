def power(x,n):
    if n==0:
        return 1
    else:
        return x * power(x,n-1)
    

x= int(input("Enter the base number: "))
n= int(input("Enter the power number: "))

print(f"{x} power {n} equals to {power(x,n)}")