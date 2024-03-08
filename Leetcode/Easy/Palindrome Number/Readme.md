# 9. Palindrome Number

### Description
Given an integer x, return true if x is a palindrome, and false otherwise.

### Code
```cpp

bool isPalindrome(int x){
    int n = x;
    long sum = 0;
    while(n > 0){
        int digit = n % 10;
        sum = sum * 10 + digit;
        n /= 10;
    }
    return sum == x;
}

```

### Steps to solution:

- It initializes a variable `num` to store the value of `x` because `x` will be modified during the process.
- It initializes a variable `sum` to 0 to accumulate the reversed number.
- It enters a while loop as long as `num` is greater than 0.
- Inside the loop, it extracts the last digit of `num` using the modulo operator (`num % 10`) and stores it in the variable digit.
- It updates the reversed number `sum` by multiplying it by 10 and adding the extracted digit (`sum = sum * 10 + digit`).
- It divides `num` by 10 to remove the last digit.
- After the loop, it checks if the reversed number `sum` is equal to the original number `x`.
- If `sum` is equal to `x`, it means `x` is a palindrome, and the function returns `true`. Otherwise, it returns `false`.


#### Time Complexity: O(logn)
#### Space Complexity: O(1)