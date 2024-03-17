# 3065. Minimum Operations to Exceed Threshold Value I

### Description
You are given a 0-indexed integer array nums, and an integer k. In one operation, you can remove one occurrence of the smallest element of nums.

Return the minimum number of operations needed so that all elements of the array are greater than or equal to k.


### Solution

```cpp

int minOperations(vector<int>& nums, int k) {
    int count = 0;
    for(int i = 0;i < nums.size();i++){
        if(nums[i] < k) count++;
    }
    return count;
}

```

### Steps to solution:

- It initializes a variable count to 0 to keep track of the number of elements less than k.
- It iterates through each element of the vector nums using a for loop.
- For each element num, it checks if num is less than k. If it is, it increments the count variable.
- Finally, it returns the value of count, which represents the number of elements in nums less than k.

### Time Complexity:
The time complexity of O(n)

### Space Complexity:
The space complexity is also O(1) 