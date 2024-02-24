'''
Function calling itself is called recurison. 
Recursion can be thought like princple of mathematical induction.

'''
# 1. recurion function for calculting the factorial of the number.
def factorial(n):
    if n == 1:
        return 1
    else:
        return n * factorial(n-1)

n = int(input("Enter the number which factorial you want to calculate."))
print(factorial(n))



