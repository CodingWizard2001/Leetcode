// You are given a 0-indexed 2D integer array nums. Initially, your score is 0. Perform the following operations until the matrix becomes empty:
// 1.   From each row in the matrix, select the largest number and remove it. In the case of a tie, it does not matter which number is chosen.
// 2.   Identify the highest number amongst all those removed in step 1. Add that number to your score.

// Return the final score.

#include<bits/stdc++.h>
using namespace std;
int matrixSum(vector<vector<int>>& nums){ 
    sort(nums.begin(),nums.end()); // This part should provided
    // Actual Solution will be for this part
    // for(vector<int>&row : nums){
    //         ranges::sort(row);
    // }   
    int ans = 0;
    for(int i = 0;i < nums[0].size();i++){
        int maxi = 0;
        for(int j = 0;j < nums.size();j++){
            maxi = max(maxi,nums[j][i]);
        }
        ans += maxi;
    }
    return ans;
}
int main(){
    int rows,cols;
    cout<<"Enter no. of rows : ";
    cin>>rows;
    cout<<"Enter no. of cols : ";
    cin>>cols;
    vector<vector<int>>nums;
    cout<<"Give input : "<<endl;
    for(int i = 0;i < rows;i++){
        vector<int>v;
        for(int j = 0;j < cols;j++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        nums.push_back(v);
    }
    cout<<"Sum will be : "<<matrixSum(nums);
}