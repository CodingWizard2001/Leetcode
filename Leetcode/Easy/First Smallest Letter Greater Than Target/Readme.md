# 744. Find Smallest Letter Greater Than Target

### Description
You are given an array of characters letters that is sorted in non-decreasing order, and a character target. There are at least two different characters in letters.

Return the smallest character in letters that is lexicographically greater than target. If such a character does not exist, return the first character in letters.

### Code
```cpp

char nextGreatestLetter(vector<char>& letters, char target) {
    int l = 0;
    int r = letters.size();
    while (l < r) {
        const int m = (l + r) / 2;
        if (letters[m] > target) r = m;
        else l = m + 1;
    }
    return letters[l % letters.size()];
}

```

### Steps to solution:

- It initializes two variables, l and r, representing the left and right boundaries of the search interval, respectively. Initially, l is set to 0, and r is set to the size of the array letters.
- It enters a while loop as long as l is less than r.
- Inside the loop, it calculates the middle index m as (l + r) / 2.
- If the letter at index m in the array letters is greater than the target letter, it updates r to m, effectively narrowing down the search interval to the left half.
- If the letter at index m is less than or equal to the target letter, it updates l to m + 1, effectively narrowing down the search interval to the right half.
- After exiting the loop, it returns the letter at index l % letters.size(), which ensures that if l exceeds the bounds of the array, it wraps around to the beginning.

#### Time Complexity: O(logn)
#### Space Complexity: O(1)