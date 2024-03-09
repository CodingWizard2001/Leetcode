# 2540. Minimum Common Value

### Description
Given two integer arrays nums1 and nums2, sorted in non-decreasing order, return the minimum integer common to both arrays. If there is no common integer amongst nums1 and nums2, return -1.

### Code
```cpp

int getCommon(vector<int>& nums1, vector<int>& nums2){
    int i = 0,j = 0;
    while(i < nums1.size() && j < nums2.size()){
        if(nums1[i] == nums2[j]) return nums1[i];
        else if(nums1[i] < nums2[j]) ++i;
        else ++j;
    }
    return -1;
}

```

### Steps to solution:

- It initializes two pointers `i` and `j` to 0, representing the current indices of `nums1` and `nums2`, respectively.
- It enters a while loop as long as both pointers `i` and `j` are within the bounds of their respective arrays.
- Inside the loop, it compares the elements at indices `i` and `j` of `nums1` and `nums2`, respectively.
- If the elements are equal, it means a common element is found, and it returns that element.
- If the element at `nums1[i]` is less than the element at `nums2[j]`, it increments `i` to move towards the potentially larger common element.
- If the element at `nums1[i]` is greater than the element at `nums2[j]`, it increments `j` to move towards the potentially larger common element.
- If no common element is found after iterating through both arrays, it returns -1.


#### Time Complexity: O(n + m)
#### Space Complexity: O(1)