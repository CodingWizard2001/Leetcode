// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target){
    for(int i = 0;i < nums.size() - 1;i++){
        for(int j = (i + 1);j < nums.size();j++){
            if(nums[i] + nums[j] == target){
                return {i,j};
            }
        }
    }
    return {-1,-1};
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
    int target;
    cout<<"Enter the target : ";
    cin>>target;
    vector<int>result = twoSum(nums,target);
    cout<<"Indices of the two numbers such that they add up to "<<target<<" are : ";
    for(int i = 0;i < result.size();i++){
        cout<<result[i]<<" ";
    }
}