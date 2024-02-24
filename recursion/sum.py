def sum(n):
    if n == 1:
        return 1
    else:
        return n + sum(n-1)


n = int(input("Enter upto how many number you want to find the sum: "))
print(f'The sum of first{n} number is {sum(10)}')