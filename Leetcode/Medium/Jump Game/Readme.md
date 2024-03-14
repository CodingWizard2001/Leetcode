# 55. Jump Game

### Description
You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

Return true if you can reach the last index, or false otherwise.


### Code
```cpp

bool canJump(vector<int>& nums) {
    int i = 0;
    for(int reach = 0;i < nums.size() && i <= reach;i++){
        reach = max(reach,i + nums[i]);
    }
    return i == nums.size();
}

```

### Steps to solution:

- It initializes an integer variable i to 0, representing the current position in the array nums.
- It iterates through the array nums using a for loop. The loop continues until either i reaches the last index of nums or i exceeds the maximum reachable index reach.
- At each step, it updates the reach variable to be the maximum of its current value and the sum of the current index i and the maximum number of steps that can be taken from index i (nums[i]).
- If the loop terminates because i reaches the last index of nums, it means that it's possible to reach the last index, and the function returns true. Otherwise, it returns false.


#### Time Complexity: O(n)
#### Space Complexity: O(1)