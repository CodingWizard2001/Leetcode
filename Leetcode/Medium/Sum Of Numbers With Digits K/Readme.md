# 2310. Sum of Numbers With Units Digit K

### Description
Given two integers num and k, consider a set of positive integers with the following properties:

1. The units digit of each integer is k.
2. The sum of the integers is num.

Return the minimum possible size of such a set, or -1 if no such set exists.

### Code
```cpp

int minimumNumbers(int num, int k) {
    if (num == 0) return 0;
    for (int i = 1; i <= 10 && i * k <= num; ++i)
        if (i * k % 10 == num % 10)
        return i;
    return -1;
}

```

### Steps to solution:

- If the given number num is 0, the function immediately returns 0, as there's no positive integer i such that i * k has the same last digit as 0.

- It iterates through the integers from 1 to 10 (inclusive) using a for loop.

    - For each integer i, it checks if the product i * k has the same last digit as the given number num (i * k % 10 == num % 10).
    - If the condition is true, it means that i * k has the same last digit as num, so it returns the value of i.
    - If no such i is found within the first 10 integers, it returns -1, indicating that there's no solution within the given constraints.


#### Time Complexity: O(1)
#### Space Complexity: O(1)