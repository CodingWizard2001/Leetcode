# 2980. Check if Bitwise OR Has Trailing Zeros

### Description
You are given an array of positive integers nums. You have to check if it is possible to select two or more elements in the array such that the bitwise OR of the selected elements has at least one trailing zero in its binary representation. Return true if it is possible to select two or more elements whose bitwise OR has trailing zeros, return false otherwise.

### Solution

```cpp

bool hasTrailingZeros(vector<int>& nums) {
    int countEven = 0;
    for (const int num : nums)
        if (num % 2 == 0) ++countEven;
    return countEven >= 2;
}

```

### Steps to solution:
- The hasTrailingZeros function takes a vector of integers nums as input.
- It initializes a variable countEven to 0 to count the number of even numbers in the vector.
- It iterates through each element num in the vector.
- For each element, it checks if it's even (i.e., divisible by 2). If it is, it increments the countEven variable.
- After iterating through all elements, it returns true if countEven is greater than or equal to 2, indicating that there are at least two even numbers in the vector.
- In the main function, it prompts the user to enter the size of the vector and its elements.
- It reads the input size and elements from the user and stores them in the nums vector.
- It calls the hasTrailingZeros function with the input vector nums and prints whether it's possible to select two or more elements whose bitwise OR operation has trailing zeros.

### Time Complexity:
The time complexity of O(n)

### Space Complexity:
The space complexity is also O(1) 