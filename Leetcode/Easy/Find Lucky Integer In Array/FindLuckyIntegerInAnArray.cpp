// Given an array of integers arr, a lucky integer is an integer that has a frequency in the array equal to its value. Return the largest lucky integer in the array. If there is no lucky integer return -1.

#include<iostream>
#include<vector>
using namespace std;
int findLucky(vector<int>& arr){
    vector<int>count(arr.size() + 1);
    for(const int i : arr){
        if(i <= arr.size()) ++count[i];
    }
    for(int i = arr.size();i >= 1;i--){
        if(count[i] == i) return i;
    }
    return -1;
}
int main(){
    int size;
    cout<<"Enter the size of  the array : ";
    cin>>size;
    vector<int>arr;
    cout<<"Given input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<"Lucky integer is : "<<findLucky(arr);
}