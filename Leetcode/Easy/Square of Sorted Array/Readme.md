# 977. Squares of a Sorted Array

### Description
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

### Code
```cpp

vector<int> sortedSquares(vector<int>& nums){
    int n = nums.size();
    vector<int>ans(n);
    int i = n - 1,left = 0,right = n - 1;
    while(left <= right){
        if(abs(nums[left]) > abs(nums[right])){
            ans[i--] = nums[left] * nums[left++];
        }
        else{
            ans[i--] = nums[right] * nums[right--];
        }
    }
    return ans;
}

```

### Steps to solution:

- It initializes a vector ans of the same size as nums to store the squared values.
- It initializes three variables: `i` to `n - 1`, left to 0, and right to `n - 1`.
- It enters a while loop as long as left is less than or equal to right.
- Inside the loop, it compares the absolute values of `nums[left]` and `nums[right]`.
    - If the absolute value of `nums[left]` is greater, it squares `nums[left]` and assigns it to `ans[i]`, then increments `left` and decrements `i`.
    - Otherwise, it squares `nums[right]` and assigns it to `ans[i]`, then decrements `right` and decrements `i`.
- After the loop, it returns the vector `ans`.

#### Time Complexity: O(n)
#### Space Complexity: O(n)