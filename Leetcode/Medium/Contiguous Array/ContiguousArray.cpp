// Given a binary array nums, return the maximum length of a contiguous sub-array with an equal number of 0 and 1.

#include<bits/stdc++.h>
using namespace std;
int findMaxLength(vector<int>& nums) {
    int LEN = nums.size();        
    vector<int> cache(2*LEN+1, -2);
    cache[LEN] = -1;    
    int count = 0, maxLength = 0;  
    for(int i=0; i<nums.size(); i++) {
        if(nums[i] == 1) count += 1;
        else count -= 1;        
        if(cache[count+LEN] != -2) maxLength = max(maxLength, i-cache[count+LEN]);
        else cache[count+LEN] = i;
    }    
    return maxLength;
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
    cout<<"The maximum length of a contiguous sub-array with an equal number of 0 and 1 will be : "<<findMaxLength(nums);
}