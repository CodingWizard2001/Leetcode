# 1512. Number of Good Pairs

### Description
Given an array of integers nums, return the number of good pairs.

A pair (i, j) is called good if nums[i] == nums[j] and i < j.

### Solution

```cpp

int numIdenticalPairs(vector<int>& nums) {
    int ans = 0;
    vector<int> count(101);
    for (const int num : nums) ans += count[num]++;
    return ans;
}


```

### Steps to solution:

- It initializes a variable ans to 0 to keep track of the number of identical pairs.
- It initializes a vector count of size 101, where count[i] will store the frequency of each number i in the range [0, 100].
- It iterates through each integer num in the input vector nums.
- For each integer num, it increments ans by the value of count[num] and then increments count[num] itself. This effectively counts the number of pairs that can be formed with the current integer num.
- Finally, it returns the value of ans, which represents the total number of identical pairs in the input vector nums.

### Time Complexity:
The time complexity of O(n)

### Space Complexity:
The space complexity is O(1) 