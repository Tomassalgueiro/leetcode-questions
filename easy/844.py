"""
Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.
Note that after backspacing an empty text, the text will continue empty.

 Example 1:

Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".

Example 2:

Input: s = "ab##", t = "c#d#"
Output: true
Explanation: Both s and t become "".

Example 3:

Input: s = "a#c", t = "b"
Output: false
Explanation: s becomes "c" while t becomes "b".
"""

def filter_string(s: str):
    backspace_count = 0
    clean_string = ""
    for i in range(len(s)):
        if s[i] == "#":
            clean_string = clean_string[0:len(clean_string)-1]
        elif s[i] != "#":
            clean_string += s[i]
    return clean_string

def backspaceCompare(s: str, t: str) -> bool:

    backspaced_s = filter_string(s) 
    backspaced_t = filter_string(t) 


    return backspaced_s == backspaced_t

print(backspaceCompare("ab#c","ad#c"))
print(backspaceCompare("ab##","c#d#"))
print(backspaceCompare("ab#c","b"))

