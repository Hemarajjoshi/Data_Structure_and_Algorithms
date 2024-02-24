def fib(n):
    if n==1 or n==2:
        return 1
    else:
       output = fib(n-1) +fib(n-2)
       return output

n = int(input("Enter the number you want to calculate the Fibonacci sequence for: "))

print(fib(n))