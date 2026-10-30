def lengthOfLastWord(s: str) -> int:

    count = 0
    for i in range(len(s)-1, 0, -1):
        if s[i] == " " and count == 0:
            continue
        elif s[i] == " ":
            return count
        else:
            count += 1

    return count

print(lengthOfLastWord("ola o meu nome e tomas"))
print(lengthOfLastWord("ola o meu nome e tomas ")) 
