# 326. Power of Three

### Description
Given an integer n, return true if it is a power of three. Otherwise, return false.

### Code
```cpp

bool isPowerOfThree(int n){
    if(n < 1) return false;
    while(n % 3 == 0) n /= 3;
    return n == 1;
}

```

### Steps to solution:

- It checks if the given integer `n` is less than 1. If `n` is less than 1, it returns `false` because no positive integer can be a power of three if it's less than 1.
- It enters a while loop as long as `n` is divisible by 3 `(n % 3 == 0)`. Inside the loop, it keeps dividing `n` by 3 `(n /= 3)`. This process continues until `n` is no longer divisible by 3.
- After exiting the loop, it checks if `n` is equal to 1. If `n` is equal to 1, it means that the original number was a power of three because it was continuously divisible by 3 until reaching 1. Otherwise, it returns `false`.


#### Time Complexity: O(logn)
#### Space Complexity: O(1)