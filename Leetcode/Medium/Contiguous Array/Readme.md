# 525. Contiguous Array

### Description
Given a binary array nums, return the maximum length of a contiguous sub-array with an equal number of 0 and 1.

### Code
```cpp

int findMaxLength(vector<int>& nums) {
    int LEN = nums.size();        
    vector<int> cache(2*LEN+1, -2);
    cache[LEN] = -1;    
    int count = 0, maxLength = 0;  
    for(int i=0; i<nums.size(); i++) {
        if(nums[i] == 1) count += 1;
        else count -= 1;        
        if(cache[count+LEN] != -2) maxLength = max(maxLength, i-cache[count+LEN]);
        else cache[count+LEN] = i;
    }    
    return maxLength;
}

```

### Steps to solution:

- It initializes variables LEN to store the length of the input array nums, cache to store the indices of the first occurrence of a particular count of 0s and 1s, count to keep track of the balance between 0s and 1s in the current sub-array, and maxLength to store the maximum length found so far.
- It iterates through the elements of the array nums using a for loop. In each iteration:
    - If the current element is 1, it increments count by 1. Otherwise, it decrements count by 1.
    - It checks if the current value of count has been encountered before. If it has, it updates maxLength by comparing it with the length of the current sub-array.
    - If the current value of count has not been encountered before, it updates the cache with the index of the first occurrence of the current count.
- Finally, it returns maxLength, which represents the maximum length of a contiguous sub-array with an equal number of 0s and 1s.


#### Time Complexity: O(n)
#### Space Complexity: O(n)