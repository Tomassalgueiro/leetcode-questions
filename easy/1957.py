def makeFancyString(s: str) -> str:
    if (len(s) < 3):
        return s
    new_str = "" + s[0]
    for i in range(1,len(s)-1):
        if s[i] == s[i-1] and s[i] == s[i+1]:
            continue
        else:
            new_str += s[i]
    new_str += s[len(s)-1]
    return new_str

print(makeFancyString("leeetcode"))
