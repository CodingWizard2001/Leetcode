# 169. Majority Element

### Description
Given an array nums of size n, return the majority element.

### Code : 1st Approach
```cpp

int majorityElement(vector<int>& nums){
    int ans;
    int count = 0;
    for(int num : nums){
        if(count == 0) ans = num;
        count += num == ans ? 1 : -1;
    }
    return ans;
}

```

### Steps to solution[1st Approach]:

- It initializes variables ans to store the potential majority element and count to keep track of its frequency.
- It iterates through the array nums, and for each element, it checks if count is 0. If it is, it updates ans to the current element.
- Regardless of whether count is 0 or not, it increments count if the current element is equal to ans, otherwise, it decrements count.
- Finally, it returns ans, which should be the majority element.

### For 1st Approach
#### Time Complexity: O(logn)
#### Space Complexity: O(1)

### Code : 2nd Approach
```cpp

int majorityElement(vector<int>& nums){
    sort(nums.begin(),nums.end());
    return nums[nums.size() / 2];
}

```

### Steps to solution[2nd Approach]:

- It sorts the input array nums in ascending order using std::sort.
- It returns the element at index nums.size() / 2, as after sorting, the majority element (if it exists) will occupy the middle position in the sorted array.
- In the main function, it takes input for the size of the array and the elements of the array.
- After taking input, it calls the majorityElement function to find the majority element and prints it out.

### For 2nd Approach
#### Time Complexity: O(nlogn)
#### Space Complexity: O(1)