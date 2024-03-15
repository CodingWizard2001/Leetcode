# 202. Happy Number

### Description
Write an algorithm to determine if a number n is happy.A happy number is a number defined by the following process:

1. Starting with any positive integer, replace the number by the sum of the squares of its digits.
2. Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
3. Those numbers for which this process ends in 1 are happy.

Return true if n is a happy number, and false if not.

### Code
```cpp

int squaredSum(int n) {
    int sum = 0;
    while (n) {
        sum += pow(n % 10, 2);
        n /= 10;
    }
    return sum;
}
bool isHappy(int n) {
    int slow = squaredSum(n);
    int fast = squaredSum(squaredSum(n));
    while (slow != fast) {
        slow = squaredSum(slow);
        fast = squaredSum(squaredSum(fast));
    }
    return slow == 1;
}

```

### Steps to solution:

1. **squaredSum function:**

- This function calculates the sum of squares of digits of a given integer n.
- It initializes a variable sum to store the sum of squares.
- It iterates through the digits of the input number n using a while loop.
- In each iteration, it calculates the square of the last digit of n using the pow function and adds it to the sum. It then updates n by removing its last digit (dividing n by 10).
- Finally, it returns the sum, which represents the sum of squares of digits of the input number n.

2. **isHappy function:**

- This function determines whether a given integer n is a happy number.
- It initializes two variables slow and fast to the squared sum of digits of n and the squared sum of digits of the squared sum of digits of n, respectively.
- It uses Floyd's cycle detection algorithm to detect cycles in the sequence of squared sums.
- It iterates through the sequence by updating slow to the squared sum of digits of slow and fast to the squared sum of digits of the squared sum of digits of fast, until slow and fast become equal.
- If slow becomes equal to 1, the function returns true, indicating that n is a happy number. Otherwise, it returns false.

#### Time Complexity: O(logn)
#### Space Complexity: O(1)