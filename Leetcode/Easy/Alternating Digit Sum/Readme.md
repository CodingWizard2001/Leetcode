# 2544. Alternating Digit Sum

### Description
You are given a positive integer n. Each digit of n has a sign according to the following rules:

1. The most significant digit is assigned a positive sign.
2. Each other digit has an opposite sign to its adjacent digits.

Return the sum of all digits with their corresponding sign.

### Code
```cpp

int alternateDigitSum(int n) {
    int ans = 0;
    int sign = 1;
    for (; n > 0; n /= 10) {
        sign *= -1;
        ans += sign * n % 10;
    }
    return sign * ans;
}

```

### Steps to solution:

- It initializes two variables: ans to store the alternating digit sum and sign to alternate between 1 and -1 to indicate whether to subtract or add the current digit.
- It iterates through the digits of the input number n using a loop. In each iteration:
    - It updates the sign by multiplying it with -1 to alternate between subtraction and addition.
    - It calculates the contribution of the current digit to the alternating sum by taking the remainder of sign * n divided by 10. This operation extracts the last digit of n and adjusts its sign based on the current iteration.
    - It adds the calculated contribution to the alternating sum ans.
- Finally, it returns the alternating sum multiplied by the sign, ensuring that the result is positive if the alternating sum is positive and negative if it is negative.

#### Time Complexity: O(logn)
#### Space Complexity: O(1)