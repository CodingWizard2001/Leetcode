# 342. Power of Four

### Description
Given an integer n, return true if it is a power of four. Otherwise, return false.

### Solution

```cpp

bool isPowerOfFour(int n){
    return n > 0 && __builtin_popcountll(n) == 1 && (n - 1) % 3 == 0;
}

```

### Steps to solution:

- `n > 0`: Checks if n is a positive integer. This condition ensures that only positive numbers are considered as powers of four, as negative numbers cannot be powers of four.
- `__builtin_popcountll(n) == 1`: Checks if the number of set bits in the binary representation of n is equal to 1. `__builtin_popcountll(n)` is a compiler-specific function that counts the number of set bits in the binary representation of n.
-` n - 1) % 3 == 0`: Checks if n - 1 is divisible by 3. This condition is a property of powers of four, as explained below.


### Time Complexity:
The time complexity of O(1)

### Space Complexity:
The space complexity is also O(1) 