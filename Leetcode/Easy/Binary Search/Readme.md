# 704. Binary Search

### Description
Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

### Code
```cpp

int search(vector<int>& nums, int target){
    int low = 0,high = nums.size() - 1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] > target) high = mid - 1;
        else low = mid + 1;
    }
    return -1;
}

```

### Steps to solution:

- It initializes two variables `low` and `high`, representing the lowest and highest indices of the search range respectively. `low` is initialized to 0, and `high` is initialized to `nums.size() - 1`, which is the index of the last element in the vector.
- It enters a while loop that continues as long as `low` is less than or equal to `high`. This loop is the binary search algorithm itself.
- Inside the loop, it calculates the `mid` index using the formula `low + (high - low) / 2`, which ensures that it avoids integer overflow when calculating `mid`.
- It checks if the element at the `mid` index is equal to the target. If it is, the function returns mid, indicating that the target has been found.
- If the element at `mid` is greater than the target, it means the target can only be in the left half of the array. So, it updates `high` to `mid - 1`.
- If the element at `mid` is less than the target, it means the target can only be in the right half of the array. So, it updates `low` to `mid + 1`.
- If the target is not found in the while loop, the function returns -1, indicating that the target is not present in the vector.

#### Time Complexity: O(logn)
#### Space Complexity: O(1)