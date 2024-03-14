# 2443. Sum of Number and Its Reverse

### Description
Given a non-negative integer num, return true if num can be expressed as the sum of any non-negative integer and its reverse, or false otherwise.

### Code
```cpp

vector<int> powerfulIntegers(int x, int y, int bound) {
    unordered_set<int>ans;
    for (int i = 1; i < bound; i *= x) {
        for (int j = 1; i + j <= bound; j *= y) {
            ans.insert(i + j);
            if (y == 1) break;
        }
        if (x == 1) break;
    }
    return {ans.begin(),ans.end()};
}

```

### Steps to solution:

- It initializes an unordered set ans to store the unique powerful integers found within the given bound.
- It iterates through the powers of x using a for loop with an increment of i *= x.
    - For each power of x, it iterates through the powers of y using a nested for loop with an increment of j *= y.
    - Within the nested loop, it calculates the sum i + j and inserts it into the set ans.
    - If y is equal to 1, it breaks out of the inner loop since further iterations will not change the value of j.
    - If x is equal to 1, it breaks out of the outer loop since further iterations will not change the value of i.
- Finally, it constructs and returns a vector containing the elements of the set ans.


#### Time Complexity: O(log(bound)^2)
#### Space Complexity: O(bound)