// You are given a 0-indexed integer array nums. An index i is part of a hill in nums if the closest non-equal neighbors of i are smaller than nums[i]. Similarly, an index i is part of a valley in nums if the closest non-equal neighbors of i are larger than nums[i]. Adjacent indices i and j are part of the same hill or valley if nums[i] == nums[j]. Note that for an index to be part of a hill or valley, it must have a non-equal neighbor on both the left and right of the index. Return the number of hills and valleys in nums.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countHillValley(vector<int>& nums) {
       int ans = 0;
        int left = nums[0];

        for (int i = 1; i + 1 < nums.size(); ++i)
          if (left < nums[i] && nums[i] > nums[i + 1] || left > nums[i] && nums[i] < nums[i + 1]) { 
// left < nums[i] && nums[i] > nums[i + 1] -> For Hills
// left > nums[i] && nums[i] < nums[i + 1] -> For Valleys
            ++ans;
            left = nums[i];
          }

        return ans;
    }
};
int main(){
    Solution solution;

    vector<int> nums = {1, 3, 2, 4, 1, 5, 2, 6};
    int count = solution.countHillValley(nums);
    cout << "Total number of hills and valleys: " << count << endl;

    nums = {2,5,7,3,4,1};
    count = solution.countHillValley(nums);
    cout << "Total Number of hills and valleys: " << count << endl;
}