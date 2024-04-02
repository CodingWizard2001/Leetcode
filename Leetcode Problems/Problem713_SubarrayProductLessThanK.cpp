// Given an array of integers nums and an integer k, return the number of contiguous sub-arrays where the product of all the elements in the sub-array is strictly less than k.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;
        int ans = 0;
        int prod = 1;
        for (int l = 0, r = 0; r < nums.size(); ++r) {
          prod *= nums[r];
          while (prod >= k)
            prod /= nums[l++];
          ans += r - l + 1;
        }
        return ans;
    }
};
int main(){
    Solution solution;
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter the elements of the array : ";
    for(int i = 0; i < n; ++i){
        cin >> nums[i];
    }
    int k;
    cout<<"Enter the target value k: ";
    cin>>k;
    int numSubarrays = solution.numSubarrayProductLessThanK(nums, k);
    cout<<"Number of subarrays whose product is less than "<<k<<" : "<<numSubarrays<<endl;
}