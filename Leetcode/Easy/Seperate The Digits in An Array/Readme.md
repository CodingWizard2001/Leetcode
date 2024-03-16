# 2553. Separate the Digits in an Array

### Description
Given an array of positive integers nums, return an array answer that consists of the digits of each integer in nums after separating them in the same order they appear in nums.

### Code
```cpp

vector<int> separateDigits(vector<int>& nums) {
    vector<int> ans;
    for (const int num : nums)
        for (const char c : to_string(num)) ans.push_back(c - '0');
    return ans;
}

```

### Steps to solution:

- It initializes an empty vector ans to store the separated digits.
- It iterates through each integer num in the input vector nums.
- For each integer num, it converts it to a string using the to_string function. This allows easy access to individual digits.
- It iterates through each character c in the string representation of num.
- For each character c, it subtracts the character '0' (ASCII value 48) from it to convert it to its corresponding integer value and pushes it to the ans vector.
- Finally, it returns the ans vector containing all the separated digits.

#### Time Complexity: O(d)
#### Space Complexity: O(d)
#### Here `d` represent no. of digits