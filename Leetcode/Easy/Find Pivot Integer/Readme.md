# 2485. Find the Pivot Integer

### Description
Given a positive integer n, find the pivot integer x such that:

The sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively.

Return the pivot integer x. If no such integer exists, return -1. It is guaranteed that there will be at most one pivot index for the given input.

### Code
```cpp

int pivotInteger(int n){
    const int y = (n * n + n) / 2;
    const int x = sqrt(y);
    return x * x == y ? x : -1;
}

```

### Steps to solution:

- It calculates the sum of integers from 1 to n using the formula `(n * n + n) / 2`. This formula represents the sum of an arithmetic series and is equivalent to `1 + 2 + 3 + ... + n`.
- It calculates the square root of the sum obtained in the previous step using the sqrt function.
- It checks if the square of the calculated square root is equal to the sum obtained in step 1.
- If the condition is true, it means that the square of the calculated square root is equal to the sum of integers from 1 to n, so it returns the calculated square root x. Otherwise, it returns -1 indicating that no such integer x exists.

#### Time Complexity: O(1)
#### Space Complexity: O(1)