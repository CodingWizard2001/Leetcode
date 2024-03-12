# 1295. Find Numbers with Even Number of Digits

### Description
Given an array nums of integers, return how many of them contain an even number of digits.

### Solution

```cpp

int findNumbers(vector<int>& nums){
    int count = 0;
    for(int num : nums){
        if(num < 9 && num < 100 || 999 < num && num < 10000 || num < 100000) count++;
    }
    return count;
}

```

### Steps to solution:

- It initializes a variable ans to 0 to store the count of numbers with an even number of digits.
- It iterates through each element num in the vector nums.
- For each element, it checks whether the number of digits in num is even by using logical OR (||) conditions.
- The conditions 9 < num && num < 100, 999 < num && num < 10000, and num == 100000 check whether num contains 2, 4, or 6 digits, respectively. These conditions are used to determine if the number of digits in num is even.
- If the condition is true for any element num, it increments the ans variable.
- After iterating through all elements, it returns the final count stored in ans.

### Time Complexity:
The time complexity of O(n)

### Space Complexity:
The space complexity is also O(1) 