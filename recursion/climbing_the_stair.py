# leetcode no. 70


def climbStair(n:int ):
    if n==0 or n==1:
        return 1
    return climbStair(n-1) +climbStair(n-2)

n = int(input("Enter the number of stairs you want to climb: "))

print(climbStair(n))
