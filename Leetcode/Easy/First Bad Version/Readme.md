# 278. First Bad Version

### Description
You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.

Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to be bad.

You are given an API bool isBadVersion(version) which returns whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.

### Code
```cpp

int firstBadVersion(int n) {
    int l = 1;
    int r = n;
    while (l < r) {
        const int m = l + (r - l) / 2;
        if (isBadVersion(m)) r = m;
        else l = m + 1;
    }
    return l;
}

```

### Steps to solution:

- It initializes two variables, l and r, representing the left and right boundaries of the search interval, respectively. Initially, l is set to 1 (the lowest version number), and r is set to n (the highest version number).
- It enters a while loop as long as l is less than r.
- Inside the loop, it calculates the middle index m using the expression l + (r - l) / 2. This avoids integer overflow, which may occur if (l + r) / 2 is used directly.
- It calls the isBadVersion function with the version number m. If the result is true (indicating that version m is bad), it updates r to m, effectively discarding the right half of the search interval.
- If the result of isBadVersion(m) is false (indicating that version m is not bad), it updates l to m + 1, effectively discarding the left half of the search interval.
- After exiting the loop, it returns the value of l, which represents the index of the first bad version.

#### Time Complexity: O(logn)
#### Space Complexity: O(1)