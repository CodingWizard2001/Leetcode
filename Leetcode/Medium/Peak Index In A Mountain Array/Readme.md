# 852. Peak Index in a Mountain Array

### Description
An array arr is a mountain if the following properties hold:

1.  arr.length >= 3
2.  There exists some i with 0 < i < arr.length - 1 such that:
    1.  arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
    2.  arr[i] > arr[i + 1] > ... > arr[arr.length - 1]

### Code
```cpp

int peakIndexInMountainArray(vector<int>& arr){
    int left = 1,right = arr.size() - 2;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]) return mid;
        else if(arr[mid] > arr[mid + 1]) right = mid - 1;
        else left = mid + 1;
    }
    return -1;
}

```

### Steps to solution:

- It initializes two pointers, `left` and `right`, to index 1 and `arr.size() - 2`, respectively. This is because the peak cannot occur at the first or last index of the array.
- It enters a binary search loop as long as `left` is less than or equal to `right`.
- Inside the loop, it calculates the middle index `mid` using binary search.
- It checks if the element at `mid` is greater than both its neighboring elements (`arr[mid] > arr[mid + 1]` and `arr[mid] > arr[mid - 1]`). If this condition is met, it returns `mid` as the index of the peak element.
- If the element at `mid` is not greater than both its neighbors, it checks whether it is greater than its right neighbor. If it is, it updates `right` to `mid - 1`, effectively discarding the right half of the search space.
- If the element at `mid` is not greater than its right neighbor, it updates `left` to `mid + 1`, effectively discarding the left half of the search space.
- If no peak element is found after the loop, it returns -1.

#### Time Complexity: O(logn)
#### Space Complexity: O(1)