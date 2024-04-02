// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size();

        while (l < r) {
          const int m = (l + r) / 2;
          if (nums[m] == target)
            return m;
          if (nums[m] < target)
            l = m + 1;
          else
            r = m;
        }

        return l;
    }
};
int main() {
    Solution solution;
    vector<int> nums = {1, 3, 5, 6, 13};
    cout<<"Our array is : ";
    for(int i = 0;i < nums.size();i++){
        cout<<nums[i]<<" ";
    }
    int target = 5;
    cout<<endl<<"Insert position of "<<target<< " : "<<solution.searchInsert(nums, target)<<endl;

    target = 2;
    cout<<"Insert position of "<<target<<" : "<<solution.searchInsert(nums,target)<<endl;

    target = 7;
    cout<<"Insert position of "<<target<<" : "<<solution.searchInsert(nums, target)<<endl;

    target = 0;
    cout<<"Insert position of "<<target<< " : "<<solution.searchInsert(nums, target)<<endl;

    return 0;
}