# 1750. Minimum Length of String After Deleting Similar Ends

### Description
Given a string s consisting only of characters 'a', 'b', and 'c'. You are asked to apply the following algorithm on the string any number of times:

1.   Pick a non-empty prefix from the string s where all the characters in the prefix are equal.
2.   Pick a non-empty suffix from the string s where all the characters in this suffix are equal.
3.   The prefix and the suffix should not intersect at any index.
4.   The characters from the prefix and suffix must be the same.
5.   Delete both the prefix and the suffix.

Return the minimum length of s after performing the above operation any number of times (possibly zero times).

### Code
```cpp

int minimumLength(string s) {
    int i = 0,j = s.length() - 1;
    while(i < j && s[i] == s[j]){
        const char c = s[i];
        while(i <= j && s[i] == c){
            ++i;
        }
        while(i <= j && s[j] == c){
            --j;
        }
    }
    return j - i + 1;
}

```

### Steps to solution:

- It initializes two pointers, `i` and `j`, where `i` points to the beginning of the string and `j` points to the end of the string.
- It enters a while loop as long as `i` is less than `j` and the characters at positions `i` and `j` in the string `s` are equal.
- Within the while loop, it stores the character at position `i` (which is equal to the character at position `j`) in a variable `c`.
- It then enters two nested while loops:
    - The first one increments `i` as long as `i` is less than or equal to `j` and the character at position `i` is equal to `c`.
    - The second one decrements `j` as long as `i` is less than or equal to `j` and the character at position `j` is equal to `c`.
- After exiting the while loop, it returns the length of the remaining substring `(j - i + 1)`. This represents the minimum length of the string after performing the described operations.

#### Time Complexity: O(n)
#### Space Complexity: O(1)