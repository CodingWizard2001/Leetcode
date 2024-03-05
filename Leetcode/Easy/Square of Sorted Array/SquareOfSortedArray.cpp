// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

#include<iostream>
#include<vector>
using namespace std;
vector<int> sortedSquares(vector<int>& nums){
    int n = nums.size();
    vector<int>ans(n);
    int i = n - 1,left = 0,right = n - 1;
    while(left <= right){
        if(abs(nums[left]) > abs(nums[right])){
            ans[i--] = nums[left] * nums[left++];
        }
        else{
            ans[i--] = nums[right] * nums[right--];
        }
    }
    return ans;
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
    cout<<"Squares of each number sorted in non-decreasing order : ";
    vector<int>result = sortedSquares(nums);
    for(int i = 0;i < result.size();i++){
        cout<<result[i]<<" ";
    }
}