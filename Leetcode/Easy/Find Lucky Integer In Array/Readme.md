# 1394. Find Lucky Integer in an Array

### Description
Given an array of integers arr, a lucky integer is an integer that has a frequency in the array equal to its value.

Return the largest lucky integer in the array. If there is no lucky integer return -1.

### Code
```cpp

int findLucky(vector<int>& arr){
    vector<int>count(arr.size() + 1);
    for(const int i : arr){
        if(i <= arr.size()) ++count[i];
    }
    for(int i = arr.size();i >= 1;i--){
        if(count[i] == i) return i;
    }
    return -1;
}

```

### Steps to solution:

- It initializes a vector `count` with a size one larger than the maximum value in the input array `arr`. This vector will be used to store the counts of each number in `arr`.
- It iterates over each element `i` in the array `arr`, incrementing the `count` of `i` in the `count` vector if i is within the range of valid indices in `count` (i.e., `i <= arr.size()`).
- After counting the occurrences of each number, it then iterates from the maximum possible value down to 1.
- In this loop, it checks if the count of the current number `i` is equal to `i`. If it finds such a number, it returns it as the lucky integer.
- If no lucky integer is found after the loop, it returns -1 to indicate that there is no lucky integer in the array.

#### Time Complexity: O(n)
#### Space Complexity: O(n)