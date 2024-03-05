# 1572. Matrix Diagonal Sum

### Description
Given a square matrix mat, return the sum of the matrix diagonals.

Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.

### Code
```cpp

int diagonalSum(vector<vector<int>>& mat){
    int n = mat.size();
    int ans = 0;
    for(int i = 0;i < n;i++){
        ans += mat[i][i];
        ans += mat[n - i - 1][i];
    }
    return n % 2 == 0 ? ans : ans - mat[n / 2][n / 2];
}

```

### Steps to solution:

- It initializes a variable `ans` to store the `sum` and sets it initially to 0.
- It iterates over the rows of the matrix using the variable `i`.
- For each iteration, it adds the value of the main diagonal element `(mat[i][i])` and the value of the corresponding element on the secondary diagonal `(mat[n - i - 1][i])` to the variable `ans`.
- After the loop, if the matrix has an odd number of rows and columns `(determined by n % 2 == 0)`, it subtracts the value of the central element `(mat[n / 2][n / 2])` from the total `sum`.
- Finally, it returns the total `sum`.

#### Time Complexity: O(n^2) 
#### Space Complexity: O(1)