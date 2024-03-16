// Given an array of positive integers nums, return an array answer that consists of the digits of each integer in nums after separating them in the same order they appear in nums.

#include<iostream>
#include<vector>
using namespace std;
vector<int> separateDigits(vector<int>& nums) {
    vector<int> ans;
    for (const int num : nums)
        for (const char c : to_string(num)) ans.push_back(c - '0');
    return ans;
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
    vector<int>result = separateDigits(nums);
    cout<<"Output will be : ";
    for(int i = 0;i < result.size();i++){
        cout<<result[i]<<" ";
    }
}