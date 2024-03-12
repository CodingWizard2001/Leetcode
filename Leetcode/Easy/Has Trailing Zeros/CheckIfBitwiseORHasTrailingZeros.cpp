// Problem: You are given an array of positive integers nums. You have to check if it is possible to select two or more elements in the array such that the bitwise OR of the selected elements has at least one trailing zero in its binary representation. Return true if it is possible to select two or more elements whose bitwise OR has trailing zeros, return false otherwise.

#include<iostream>
#include<vector>
using namespace std;
bool hasTrailingZeros(vector<int>& nums){
    int countEven = 0;
    for(int num : nums){
        if(num % 2 == 0) ++countEven;
    }
    return countEven >= 2;
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
    if(hasTrailingZeros(nums)){
        cout<<"It is possible to select two or more elements whose bitwise OR has trailing zeros";
    }
    else{
        cout<<"It is not possible to select two or more elements whose bitwise OR has trailing zeros";
    }
}