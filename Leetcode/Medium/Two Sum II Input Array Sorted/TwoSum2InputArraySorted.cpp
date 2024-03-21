// Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length. Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.

#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int>& numbers, int target) {
    int l = 0;
    int r = numbers.size() - 1;
    while (numbers[l] + numbers[r] != target)
        if (numbers[l] + numbers[r] < target) ++l;
        else --r;
    return {l + 1, r + 1};
}
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>numbers;
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        numbers.push_back(x);
    }
    int target;
    cout<<"Enter target : ";
    cin>>target;
    vector<int>result = twoSum(numbers,target);
    cout<<"Indexes are : ";
    for(int i = 0;i < result.size();i++){
        cout<<result[i]<<" & ";
    }
}