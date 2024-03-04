// Given an array nums of size n, return the majority element.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int majorityElement(vector<int>& nums){
    sort(nums.begin(),nums.end());
    return nums[nums.size() / 2];
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
    cout<<"Majority element will be : "<<majorityElement(nums);
}