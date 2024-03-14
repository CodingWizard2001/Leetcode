# 287. Find the Duplicate Number

### Description
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

### Code
```cpp

int findDuplicate(vector<int>& nums) {
    int slow = nums[nums[0]];
    int fast = nums[nums[nums[0]]];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[nums[fast]];
    }
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}

```

### Steps to solution:

- It initializes two pointers, slow and fast, to the values of the elements in the vector nums. The initialization is done in a way that slow moves one step at a time while fast moves two steps at a time. This is analogous to having a tortoise and a hare moving through the array.
- It enters a while loop that continues until slow becomes equal to fast. This loop detects the intersection point of the tortoise and hare in the cycle. Once the intersection point is found, it means there is a cycle in the array.
- After finding the intersection point, it re-initializes the slow pointer to the beginning of the array and keeps the fast pointer at the intersection point.
- It enters another while loop that continues until slow becomes equal to fast. This loop finds the entry point of the cycle, which represents the duplicate number in the array.

- Once the entry point of the cycle (i.e., the duplicate number) is found, it returns the value of slow.


#### Time Complexity: O(n)
#### Space Complexity: O(1)