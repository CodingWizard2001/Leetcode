# 2443. Sum of Number and Its Reverse

### Description
Given a non-negative integer num, return true if num can be expressed as the sum of any non-negative integer and its reverse, or false otherwise.

### Code
```cpp

int reversed(int num){
    int ans = 0;
    while (num > 0) {
        ans = ans * 10 + num % 10;
        num /= 10;
    }
    return ans;
}
bool sumOfNumberAndReverse(int num){
    for (int i = num / 2; i <= num; ++i){
        if (num == i + reversed(i)){
            return true;
        }
    }
    return false;        
}

```

### Steps to solution:

1.  reversed function: 

- This function takes an integer num as input and returns its reverse. 
- It iterates through the digits of the input number, extracting each digit from the least significant position (using modulo operation) and building the reversed number by appending digits from right to left.

2.  sumOfNumberAndReverse function: 

- This function takes an integer num as input and checks if num is equal to the sum of itself and its reverse.
- It iterates through the numbers from num/2 to num (inclusive), calculating the reverse of each number.
- checking if the sum of the number and its reverse equals num. 
- If such a pair is found, the function returns true; otherwise, it returns false.


#### Time Complexity: O(n)
#### Space Complexity: O(1)