# 342. Power of Four

### Description
Given an integer n, return true if it is a power of four. Otherwise, return false.

### Code
```cpp

bool isPowerOfThree(int n){
    if(n < 1) return false;
    while(n % 4 == 0) n /= 4;
    return n == 1;
}

```

### Steps to solution:

- It checks if the given integer `n` is less than 1. If `n` is less than 1, it returns `false` because no positive integer can be a power of four if it's less than 1.
- It enters a while loop as long as `n` is divisible by 3 `(n % 4 == 0)`. Inside the loop, it keeps dividing `n` by 3 `(n /= 4)`. This process continues until `n` is no longer divisible by 4.
- After exiting the loop, it checks if `n` is equal to 1. If `n` is equal to 1, it means that the original number was a power of four because it was continuously divisible by 4 until reaching 1. Otherwise, it returns `false`.


#### Time Complexity: O(logn)
#### Space Complexity: O(1)