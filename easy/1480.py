def runningSum(nums: list[int]) -> list[int]:
    running = 0
    newArr = []

    for i in range(len(nums)):
        running += nums[i]
        newArr.append(running)

    return newArr


print(runningSum([1,2,3,4]))
