# 136. Single Number

### Description
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

### Code
```cpp

int singleNumber(vector<int>& nums){
    int ans = 0;
    for(int num : nums){
        ans ^= num;
    }
    return ans;
}

```

### Steps to solution:

- It initializes a variable ans to 0.
- It iterates through each element num in the nums vector.
- For each element num, it performs bitwise XOR (^=) operation between ans and num. This operation cancels out the duplicate occurrences of each number, leaving only the number that appears once.
- After processing all elements, the function returns the value of ans, which represents the number that appears only once in the vector.

#### Time Complexity: O(n)
#### Space Complexity: O(1)