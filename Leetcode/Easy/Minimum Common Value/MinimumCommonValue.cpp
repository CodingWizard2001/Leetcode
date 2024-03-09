// Given two integer arrays nums1 and nums2, sorted in non-decreasing order, return the minimum integer common to both arrays. If there is no common integer amongst nums1 and nums2, return -1.

#include<iostream>
#include<vector>
using namespace std;
int getCommon(vector<int>& nums1, vector<int>& nums2){
    int i = 0,j = 0;
    while(i < nums1.size() && j < nums2.size()){
        if(nums1[i] == nums2[j]) return nums1[i];
        else if(nums1[i] < nums2[j]) ++i;
        else ++j;
    }
    return -1;
}
int main(){
    int size1,size2;
    cout<<"Enter the first array size : ";
    cin>>size1;
    vector<int>nums1;
    cout<<"Give input for first array : ";
    for(int i = 0;i < size1;i++){
        int x;
        cin>>x;
        nums1.push_back(x);
    }
    cout<<"Enter the second array size : ";
    cin>>size2;
    vector<int>nums2;
    cout<<"Give input for second array : ";
    for(int i = 0;i < size2;i++){
        int x;
        cin>>x;
        nums2.push_back(x);
    }
    cout<<"Minimum common value : "<<getCommon(nums1,nums2);
}