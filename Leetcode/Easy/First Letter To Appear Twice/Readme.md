# 2351. First Letter to Appear Twice


### Description
Given a string s consisting of lowercase English letters, return the first letter to appear twice.

Note:

1. A letter a appears twice before another letter b if the second occurrence of a is before the second occurrence of b.
2. s will contain at least one letter that appears twice.

### Code
```cpp

char repeatedCharacter(string s) {
    int count = 0;
    map<char, int> mp;
    for (int i = 0; i < s.size(); ++i){
        ++mp[s[i]];
        if (mp[s[i]] == 2) return s[i];
    }
    return -1;
}

```

### Steps to solution:

- It initializes a variable count to 0 to keep track of the number of occurrences of each character.
- It initializes a map called mp to store the count of occurrences of each character in the string.
- It iterates through each character of the string s using a for loop.
- For each character s[i], it increments its count in the map mp.
- If the count of the current character becomes 2 (indicating that it is repeated), the function returns the character immediately.
- If no repeated character is found after iterating through the entire string, the function returns -1.

#### Time Complexity: O(logn)
#### Space Complexity: O(1)