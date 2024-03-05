# 231. Power of Two

### Description
Given an integer n, return true if it is a power of two. Otherwise, return false.

### Code
```cpp

bool isPowerOfTwo(int n){
    return (n & (n == 1)) == 0;
}

```

### Steps to solution:

- It checks if the given integer `n` is less than 1. If `n` is less than 1, it returns `false` because no positive integer can be a power of two if it's less than 1.
- It enters a while loop as long as `n` is divisible by 3 `(n % 2 == 0)`. Inside the loop, it keeps dividing `n` by 3 `(n /= 2)`. This process continues until `n` is no longer divisible by 2.
- After exiting the loop, it checks if `n` is equal to 1. If `n` is equal to 1, it means that the original number was a power of three because it was continuously divisible by 2 until reaching 1. Otherwise, it returns `false`.


#### Time Complexity: O(1)
#### Space Complexity: O(1)