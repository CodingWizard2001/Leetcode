# 2595. Number of Even and Odd Bits

### Description
You are given a positive integer n. Let even denote the number of even indices in the binary representation of n (0-indexed) with value 1. Let odd denote the number of odd indices in the binary representation of n (0-indexed) with value 1. Return an integer array answer where answer = [even, odd]

### Solution

```cpp

vector<int> evenOddBit(int n){
    vector<int>ans(2);
    int i = 0;
    while(n > 0){
        ans[i] += n & 1;
        n >>= 1;
        i ^= 1;
    }
    return ans;
}

```

### Steps to solution:


### Time Complexity:
The time complexity of O(n)

### Space Complexity:
The space complexity is also O(1) 