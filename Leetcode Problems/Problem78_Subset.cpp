// Given an integer array nums of unique elements, return all possible subsets (the power set).

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void helper(vector<int>& nums,vector<int> v,vector<vector<int>>& finalAns,int idx){
        if(idx == nums.size()){
            finalAns.push_back(v);
            return;
        }
        helper(nums,v,finalAns,idx + 1);
        v.push_back(nums[idx]);
        helper(nums,v,finalAns,idx + 1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> v;
        vector<vector<int>>finalAns;
        helper(nums,v,finalAns,0);
        return finalAns;
    }
};
int main(){
     Solution solution;

    vector<int> nums = {1, 2, 3};
    vector<vector<int>> subsets = solution.subsets(nums);
    cout << "Subsets of {1, 2, 3}:" << endl;
    for (const auto& subset : subsets) {
        cout << "[";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    nums = {1, 2, 3, 5};
    subsets = solution.subsets(nums);
    cout<<endl<<endl<< "Subsets of {1, 2, 3 , 5}:" << endl;
    for (const auto& subset : subsets) {
        cout << "[";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
}