// Given an array nums of integers, return how many of them contain an even number of digits.

#include<iostream>
#include<vector>
using namespace std;
int findNumbers(vector<int>& nums){
    int count = 0;
    for(int num : nums){
        if(num < 9 && num < 100 || 999 < num && num < 10000 || num < 100000) count++;
    }
    return count;
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
    cout<<"No. of contain an even number of digits : "<<findNumbers(nums);
}