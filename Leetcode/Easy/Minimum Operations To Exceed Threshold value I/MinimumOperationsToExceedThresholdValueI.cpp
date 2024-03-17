// You are given a 0-indexed integer array nums, and an integer k. In one operation, you can remove one occurrence of the smallest element of nums. Return the minimum number of operations needed so that all elements of the array are greater than or equal to k.

#include<iostream>
#include<vector>
using namespace std;
int minOperations(vector<int>& nums, int k) {
    int count = 0;
    for(int i = 0;i < nums.size();i++){
        if(nums[i] < k) count++;
    }
    return count;
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
    int k;
    cout<<"Enter the value of k : ";
    cin>>k;
    cout<<"The minimum number of operations needed so that all elements of the array are greater than or equal to "<<k<<" are : "<<minOperations(nums,k);
}