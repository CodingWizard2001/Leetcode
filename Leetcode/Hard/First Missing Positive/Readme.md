# 41. First Missing Positive

### Description
Given an unsorted integer array nums. Return the smallest positive integer that is not present in nums.

### Code
```cpp

int firstMissingPositive(vector<int>& nums) {
    const int n = nums.size();
    for (int i = 0; i < n; ++i)
    while (nums[i] > 0 && nums[i] <= n && nums[i] != nums[nums[i] - 1]){
        swap(nums[i], nums[nums[i] - 1]);
    }
    for (int i = 0; i < n; ++i){
        if (nums[i] != i + 1){
            return i + 1;
        }
    }
    return n + 1;
}

```

### Steps to solution:

- It first calculates the size of the input vector nums and stores it in the constant variable n.
- It performs a cyclic sort on the elements of the array: For each element `nums[i]` in the array, it continuously swaps the element with the element at index `nums[i] - 1` until `nums[i]` is either non-positive or exceeds the size of the array, or until the value at `nums[i] - 1` is equal to `nums[i]`. This process ensures that all positive integers from `1` to `n` (inclusive) are placed at their respective indices in the array.
- After the cyclic sort, it iterates through the array again:
    - For each index `i`, if `nums[i]` is not equal to `i + 1`, it means that `i + 1` is the smallest positive integer missing from the array. It returns `i + 1` as the result.
    - If the loop finishes without finding a missing positive integer, it returns `n + 1`, as all positive integers from `1` to `n` were present in the array.


#### Time Complexity: O(n)
#### Space Complexity: O(1)