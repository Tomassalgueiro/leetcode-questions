# we are given an array with a digit represented in list:
#
# 123 -> [1,2,3]
#
# we take this array and increment it by one
# it's basically the same thought as writting a program for a digita clock

def plusOne(digits: list[int]) -> list[int]:

    carry = 0
    if digits[len(digits)-1] + 1 == 10:
        carry = 1
        digits[len(digits)-1] = 0
    else:
        digits[len(digits)-1] += 1

    for i in range(len(digits)-2,-1,-1): 
        if digits[i] + 1 == 10 and carry == 1:
            carry = 1
            digits[i] = 0
        elif carry == 1:
            if digits[i] == 9:
                digits[i] = 0
                carry = 1
            else:
                digits[i] += 1
                carry = 0

    if carry == 1:
        digits.insert(0,1)


    return digits

print(plusOne([1,2,3]))
print(plusOne([4,3,2,1]))
print(plusOne([1,2,3,9]))
print(plusOne([9]))
print(plusOne([8,9,9,9]))
print(plusOne([9,8,7,6,5,4,3,2,1,0]))

