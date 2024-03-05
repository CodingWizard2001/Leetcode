# 240. Search a 2D Matrix II

### Description
Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

1.  Integers in each row are sorted in ascending from left to right.
2.  Integers in each column are sorted in ascending from top to bottom.

### Code
```cpp

bool searchMatrix(vector<vector<int>>& matrix, int target){
    int left = 0, right = matrix[0].size() - 1;
    while(left < matrix.size() && right >= 0){
        if(matrix[left][right] == target) return true;
        else if(matrix[left][right] > target) --right;
        else ++left;
    }
    return false;
}

```

### Steps to solution:

- **Input:** The code starts by taking input for the number of rows and columns of the matrix from the user.
- **Matrix Input:** It then takes input for the matrix elements row by row from the user.
- **Search:** The searchMatrix function implements the search algorithm. It starts from the top-right corner of the matrix (or bottom-left corner could be chosen as well).
- **Search Algorithm:** 
    - It compares the target value with the element at the current position. If the target is found, it returns true. 
    - If the element is greater than the target, it means the target cannot be present in the current column, so it moves left (decrements right).
    - If the element is smaller, it means the target cannot be present in the current row, so it moves down (increments left).
- **Output:** After the search, the main function prints whether the target element is found in the matrix or not.

#### Time Complexity: O(m + n) where m is the no. of rows & n is no. of cols 
#### Space Complexity: O(1)