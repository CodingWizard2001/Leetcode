# 2679. Sum in a Matrix

### Description
You are given a 0-indexed 2D integer array nums. Initially, your score is 0. Perform the following operations until the matrix becomes empty:
1.   From each row in the matrix, select the largest number and remove it. In the case of a tie, it does not matter which number is chosen.
2.   Identify the highest number amongst all those removed in step 1. Add that number to your score.

Return the final score.

### Code
```cpp

class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int ans = 0;
        for(vector<int>&row : nums){
            ranges::sort(row);
        }
        for(int i = 0;i < nums[0].size();++i){
            int maxi = 0;
            for(int j = 0;j < nums.size();++j){
                maxi = max(maxi,nums[j][i]);
            }
            ans += maxi;
        }
        return ans;
    }
};

```

### Steps to solution:

- **Sort Each Row:** The function starts by iterating through each row of the input matrix `nums` using a range-based for loop. Within this loop, it sorts each row using the `ranges::sort` function. This step ensures that the elements in each row are in non-decreasing order.
- **Find Maximum Element in Each Column:** After sorting each row, the function proceeds to iterate through each column of the matrix. It initializes a variable `maxi` to keep track of the maximum element found in the current column. For each column, it iterates through all the rows and updates `maxi` if it encounters a larger element. Finally, it adds the maximum element of each column to the variable `ans`.
- **Return the Sum:** Once all columns have been processed, the function returns the accumulated sum stored in the variable `ans`, which represents the sum of the maximum elements in each column of the sorted matrix.

#### Time Complexity: O(n * m log m) where n is the no. of rows & m is no. of elements present in each row
#### Space Complexity: O(1)