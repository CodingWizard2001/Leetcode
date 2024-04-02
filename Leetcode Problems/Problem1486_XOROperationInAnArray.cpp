// You are given an integer n and an integer start. Define an array nums where nums[i] = start + 2 * i (0-indexed) and n == nums.length. Return the bitwise XOR of all elements of nums.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int xorOperation(int n, int start) {
        int ans = 0;
        for(int i = 0;i < n;i++){
            ans ^= start + 2 * i;
        }
        return ans;
    }
};
int main(){
    Solution solution;
    int n,start;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of start: ";
    cin>>start;
    int result = solution.xorOperation(n,start);
    cout<<"Result of XOR operation: " <<result<< endl;
}