// Given an array of integers nums, return the number of good pairs. A pair (i, j) is called good if nums[i] == nums[j] and i < j.

#include<iostream>
#include<vector>
using namespace std;
int numIdenticalPairs(vector<int>& nums) {
    int ans = 0;
    vector<int> count(101);
    for (const int num : nums) ans += count[num]++;
    return ans;
}
int main(){
    int size;
    cout<<"Enter the size of the arrays : ";
    cin>>size;
    vector<int>nums;
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<"The number of good pairs are : "<<numIdenticalPairs(nums);
}