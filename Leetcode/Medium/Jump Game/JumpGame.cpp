// You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position. Return true if you can reach the last index, or false otherwise.

#include<iostream>
#include<vector>
using namespace std;
bool canJump(vector<int>& nums) {
    int i = 0;
    for(int reach = 0;i < nums.size() && i <= reach;i++){
        reach = max(reach,i + nums[i]);
    }
    return i == nums.size();
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
    if(canJump(nums)) cout<<"Can reach the last index";
    else cout<<"Can't reach the last index";
}