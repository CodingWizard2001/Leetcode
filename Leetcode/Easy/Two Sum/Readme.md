# 1. Two Sum

### Description
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

### Code : 1st Approach
```cpp

vector<int> twoSum(vector<int>& nums, int target){
    for(int i = 0;i < nums.size() - 1;i++){
        for(int j = (i + 1);j < nums.size();j++){
            if(nums[i] + nums[j] == target){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}

```

### Steps to solution[1st Approach]:

- It iterates through each index `i` from `0` to `nums.size() - 1`.
- For each i, it iterates through each index `j` from `i + 1` to `nums.size() - 1`.
- Inside the nested loop, it checks if the sum of `nums[i]` and `nums[j]` equals the given `target`.
- If the sum equals the `target`, it returns a vector containing the indices `i` and `j`.
- If no such pair is found after the nested loop, it returns {-1, -1} to indicate that no solution exists.

### For 1st Approach
#### Time Complexity: O(n^2)
#### Space Complexity: O(1)

### Code : 2nd Approach
```cpp

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numToIndex;
    for (int i = 0; i < nums.size(); ++i) {
      if (const auto it = numToIndex.find(target - nums[i]);
          it != numToIndex.cend())
        return {it->second, i};
      numToIndex[nums[i]] = i;
    }
    throw;
}

```

### Steps to solution[2nd Approach]:

- It initializes an unordered map numToIndex, where the key is the number from the input array, and the value is its index.
- It iterates through each element in the nums array.
- For each element nums[i], it calculates the complement target - nums[i] that would sum up to the target.
- It checks if this complement exists in the numToIndex map by using the find function. If it does, it means that the current element and its complement found previously will sum up to the target. In this case, it returns a vector containing the indices of the two elements.
- If the complement doesn't exist in the map, it adds the current element and its index to the map.
- If no solution is found after iterating through all elements, it throws an exception.

### For 2nd Approach
#### Time Complexity: O(n)
#### Space Complexity: O(n)