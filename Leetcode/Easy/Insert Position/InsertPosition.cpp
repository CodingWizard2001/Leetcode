// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

#include<iostream>
#include<vector>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
    int l = 0;
    int r = nums.size();
    while (l < r) {
        const int m = (l + r) / 2;
        if (nums[m] == target) return m;
        if (nums[m] < target) l = m + 1;
        else r = m;
    }
    return l;
}
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>nums;
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int target;
    cout<<"Enter the value of target : ";
    cin>>target;
    cout<<"the index of the "<<target<<" is : "<<searchInsert(nums,target);
}