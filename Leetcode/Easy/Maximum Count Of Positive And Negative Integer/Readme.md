# 2529. Maximum Count of Positive Integer and Negative Integer

### Description
Given an array nums sorted in non-decreasing order, return the maximum between the number of positive integers and the number of negative integers.

Return the largest lucky integer in the array. If there is no lucky integer return -1.

### Code
```cpp

int maximumCount(vector<int>& nums){
    int neg = 0,pos = 0;
    for(int i = 0;i < nums.size();i++){
        if(nums[i] > 0) pos++;
        else if(nums[i] < 0) neg++;
    }
    return max(pos,neg);
}

```

### Steps to solution:

- It initializes two variables, `neg` and `pos`, to count the number of negative and positive integers in the input vector, respectively.
- It iterates through each element of the vector `nums`.
- Inside the loop, it checks if the current element is greater than zero. If it is, it increments the count of positive integers (`pos`) by one.
- If the current element is less than zero, it increments the count of negative integers (`neg`) by one.
- After processing all elements, it returns the maximum count of either positive or negative integers using the `max` function.

#### Time Complexity: O(n)
#### Space Complexity: O(1)