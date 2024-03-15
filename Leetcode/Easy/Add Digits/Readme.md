# 258. Add Digits

### Description
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

### Code
```cpp

int addDigits(int num) {
    return 1 + (num - 1) % 9;
}

```

### Steps to solution:

- If num is 0, it returns 0 since the digital root of 0 is 0.
- Otherwise, it calculates `(num - 1) % 9` and adds 1 to the result. This formula efficiently computes the digital root of num.

#### Time Complexity: O(1)
#### Space Complexity: O(1)