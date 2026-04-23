# get an index and return a list with the pascal elements of it
# starting on 0 being [1]

def getRow(rowIndex: int) -> List[int]:
    if rowIndex == 0: return [1]
    if rowIndex == 1: return [1,1]

    current_line = []
    past_line = [1,1]
    for j in range(1,rowIndex):
        current_line = []
        current_line.append(1)
        for i in range(len(past_line)-1):
            current_line.append(past_line[i]+past_line[i+1])
        current_line.append(1)
        past_line = current_line

    return current_line


print(getRow(1))
print(getRow(2))
print(getRow(3))
