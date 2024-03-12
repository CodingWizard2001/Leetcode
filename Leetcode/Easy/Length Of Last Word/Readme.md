# 58. Length of Last Word

### Description
Given a string s consisting of words and spaces, return the length of the last word in the string.

### Solution

```cpp

int lengthOfLastWord(string s){
    int i = s.length() - 1;
    while(i >= 0 && s[i] == ' ') --i;
    int lastIndex = i;
    while(i >= 0 && s[i] != ' ') --i;
    return lastIndex - i;
}

```

### Steps to solution:

- It initializes an integer variable i to s.length() - 1, which represents the index of the last character in the string s.
- It enters a while loop as long as i is greater than or equal to 0 and the character at index i in the string s is a space character ' '. This loop skips any trailing space characters at the end of the string.
- After exiting the first while loop, it stores the index of the last non-space character in the variable lastIndex.
- It enters another while loop as long as i is greater than or equal to 0 and the character at index i in the string s is not a space character ' '. This loop finds the start index of the last word in the string.
- After exiting the second while loop, it calculates the length of the last word by subtracting the index of the last non-space character (lastIndex) from the index of the start of the last word (i).

It returns the length of the last word.

### Time Complexity:
The time complexity of O(n)

### Space Complexity:
The space complexity is also O(1) 