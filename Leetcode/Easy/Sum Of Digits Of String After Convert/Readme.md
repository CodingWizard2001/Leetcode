# 1945. Sum of Digits of String After Convert

### Description
You are given a string s consisting of lowercase English letters, and an integer k.

First, convert s into an integer by replacing each letter with its position in the alphabet (i.e., replace 'a' with 1, 'b' with 2, ..., 'z' with 26). Then, transform the integer by replacing it with the sum of its digits. Repeat the transform operation k times in total.

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
int convert(string s) {
    int sum = 0;
    for (const char c : s) {
        const int val = c - 'a' + 1;
        sum += val < 10 ? val : (val % 10 + val / 10);
    }
    return sum;
}
int getLucky(string s, int k) {
    int ans = convert(s);
    for (int i = 1; i < k; ++i) ans = getDigitSum(ans);
    return ans;
}

```

### Steps to solution:

1.  **getDigitSum function:**
    - This function calculates the sum of the digits of a given integer num.
    - It initializes a variable digitSum to store the sum of digits.
    - It iterates through the digits of the input number num using a while loop.
    - In each iteration, it adds the last digit of num to the digitSum and updates num by removing its last digit (dividing num by 10).
    - Finally, it returns the digitSum, which represents the sum of digits of the input number num.

2.  **convert function:**

    - This function converts a string s to an integer by summing the values of its characters.
    - It initializes a variable sum to store the sum of character values.
    - It iterates through each character c in the string s.
    - For each character c, it calculates its value as val = c - 'a' + 1. If the resulting value is less than 10, it adds it directly to the sum. Otherwise, it splits the value into its digits and adds them individually to the sum.
    - Finally, it returns the sum, which represents the converted integer value of the string s.

3.  **getLucky function:**

    - This function calculates the "lucky number" obtained after a certain number of transformations on the converted integer value of a string s.
    - It first converts the string s to an integer using the convert function.
    - Then, it iterates k-1 times, each time applying the getDigitSum function to the result obtained from the previous iteration.
    - Finally, it returns the resulting value after k iterations.


#### Overall Time Complexity: O(n)
#### Overall Space Complexity: O(1)