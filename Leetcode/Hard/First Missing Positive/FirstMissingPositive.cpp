// Given an unsorted integer array nums. Return the smallest positive integer that is not present in nums.

#include<iostream>
#include<vector>
using namespace std;
int firstMissingPositive(vector<int>& nums) {
    const int n = nums.size();
    for (int i = 0; i < n; ++i)
    while (nums[i] > 0 && nums[i] <= n && nums[i] != nums[nums[i] - 1]){
        swap(nums[i], nums[nums[i] - 1]);
    }
    for (int i = 0; i < n; ++i){
        if (nums[i] != i + 1){
            return i + 1;
        }
    }
    return n + 1;
}
int main(){
    int size;
    cout<<"Enter the size of  the array : ";
    cin>>size;
    vector<int>nums;
    cout<<"Given input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<"First missing positive number is : "<<firstMissingPositive(nums);
}