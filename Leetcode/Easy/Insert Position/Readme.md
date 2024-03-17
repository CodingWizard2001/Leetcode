# 35. Search Insert Position

### Description
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.


### Solution

```cpp

int searchInsert(vector<int>& nums, int target) {
    int l = 0;
    int r = nums.size();
    while (l < r) {
        const int m = (l + r) / 2;
        if (nums[m] == target) return m;
        if (nums[m] < target) l = m + 1;
        else r = m;
    }
    return l;
}

```

### Steps to solution:

- It initializes two variables, l and r, representing the left and right boundaries of the search interval, respectively. Initially, l is set to 0, and r is set to the size of the array nums.
- It enters a while loop as long as l is less than r.
- Inside the loop, it calculates the middle index m as (l + r) / 2.
- If the element at index m in the array nums is equal to the target, the function returns m as the index where the target is found.
- If the element at index m is less than the target, it updates l to m + 1, effectively discarding the left half of the search interval.
- If the element at index m is greater than or equal to the target, it updates r to m, effectively discarding the right half of the search interval.
- After exiting the loop, it returns the value of l, which represents the index where the target should be inserted if it's not already present in the array.

### Time Complexity:
The time complexity of O(logn)

### Space Complexity:
The space complexity is also O(1) 