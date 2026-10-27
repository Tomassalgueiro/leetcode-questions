# receive a num and calculate the lower end sqrt
# How can we do this?
# 1 - maybe we can iterate from 1 to infinite multiply it by it self n * n and then return n - 1 if n*n > x
def mySqrt(x: int) -> int:
    count = 1
    
    while 1:
        if count*count > x:
           break 
        count += 1
 
    return count - 1

print(mySqrt(8))
