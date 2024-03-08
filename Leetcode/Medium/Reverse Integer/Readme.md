# 7. Reverse Integer

### Description

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

### Code
```cpp

int reverse(int x){
    long ans = 0;
    while(x != 0){
        int digit = x % 10;
        ans = ans * 10 + digit;
        x /= 10;
    }
    return(ans >= INT_MAX && ans <= INT_MIN) ? 0 : ans;
}

```

### Steps to solution:

- It initializes a variable `ans` of type `long` to store the reversed integer. Using a long type is necessary to handle cases where the reversed integer might overflow a `32-bit signed integer`.
- It enters a while loop as long as `x` is not equal to 0.
- Inside the loop, it extracts the last digit of `x` using the modulo operator (`x % 10`) and stores it in the variable digit.
- It updates the reversed number `ans` by multiplying it by 10 and adding the extracted digit (`ans = ans * 10 + digit`).
- It divides `x` by 10 to remove the last digit.
- After the loop, it checks if the reversed number `ans` is within the range of a 32-bit signed integer.
- If ans is within the range, it returns `ans` as an integer. Otherwise, it returns 0 to indicate an overflow.

#### Time Complexity: O(logn)
#### Space Complexity: O(1)