def  one_to_n(n):
    if n==0:
        return 
    else:
        one_to_n(n-1)
        print(n)
        return 
    
n = int(input("Enter the number you want to print from 1 to n: "))

one_to_n(n)

