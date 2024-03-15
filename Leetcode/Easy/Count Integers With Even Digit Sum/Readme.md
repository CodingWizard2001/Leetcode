# 2180. Count Integers With Even Digit Sum

### Description
Given a positive integer num, return the number of positive integers less than or equal to num whose digit sums are even.

The digit sum of a positive integer is the sum of all its digits.

### Code
```cpp

int getDigitSum(int num) {
    int digitSum = 0;
    while (num > 0) {
        digitSum += num % 10;
        num /= 10;
    }
    return digitSum;
}
int countEven(int num) {
    return (num - getDigitSum(num) % 2) / 2;
}

```

### Steps to solution:

1.  getDigitSum function:

- This function calculates the sum of digits of a given integer num.
- It initializes a variable digitSum to store the sum of digits.
- It iterates through the digits of the input number num using a while loop.
- In each iteration, it adds the last digit of num to the digitSum and updates num by removing its last digit (dividing num by 10).
- Finally, it returns the digitSum, which represents the sum of digits of the input number num.

2.  countEven function:

- This function calculates the count of even digits in a given integer num.
- It computes the count of even digits by subtracting the sum of digits of num from num itself and then dividing the result by 2.
- The assumption here is that if a number has n even digits, the sum of these digits is 2*n, so subtracting this sum from the original number gives num - 2*n, which is the count of even digits.

#### Time Complexity: O(logn)
#### Space Complexity: O(1)