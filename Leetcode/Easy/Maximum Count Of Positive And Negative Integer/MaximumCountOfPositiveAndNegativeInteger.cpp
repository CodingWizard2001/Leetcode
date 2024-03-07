// Given an array nums sorted in non-decreasing order, return the maximum between the number of positive integers and the number of negative integers.

#include<iostream>
#include<vector>
using namespace std;
int maximumCount(vector<int>& nums){
    int neg = 0,pos = 0;
    for(int i = 0;i < nums.size();i++){
        if(nums[i] > 0) pos++;
        else if(nums[i] < 0) neg++;
    }
    return max(pos,neg);
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
    cout<<"Maximum between the number of positive and negative integers : "<<maximumCount(nums);
}