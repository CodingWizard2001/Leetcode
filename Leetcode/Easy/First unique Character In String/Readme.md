# 387. First Unique Character in a String

### Description
Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

### Code
```cpp

int firstUniqChar(string s) {
    vector<int> count(26);
    for (const char c : s) ++count[c - 'a'];
    for (int i = 0; i < s.length(); ++i)
        if (count[s[i] - 'a'] == 1) return i;
    return -1;
}

```

### Steps to solution:

- It initializes a vector count of size 26 to store the count of occurrences of each lowercase English letter.
- It iterates through each character c in the string s using a range-based for loop, and increments the count of the corresponding letter in the vector count.
- After counting the occurrences of each letter in the string, it iterates through the string again using a regular for loop.
- For each character s[i], it checks if its count in the vector count is equal to 1. If so, it returns the index i, indicating that s[i] is the first unique character in the string.
- If no unique character is found after iterating through the entire string, the function returns -1.

#### Time Complexity: O(n)
#### Space Complexity: O(1)