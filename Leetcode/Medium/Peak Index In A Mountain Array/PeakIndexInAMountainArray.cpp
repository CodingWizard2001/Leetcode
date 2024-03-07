// An array arr is a mountain if the following properties hold:
// arr.length >= 3
// There exists some i with 0 < i < arr.length - 1 such that:
// arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
// arr[i] > arr[i + 1] > ... > arr[arr.length - 1]

#include<iostream>
#include<vector>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr){
    int left = 1,right = arr.size() - 2;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]) return mid;
        else if(arr[mid] > arr[mid + 1]) right = mid - 1;
        else left = mid + 1;
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
    cout<<"Peak index of mountain array ";
    for(int i = 0;i < arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<"is : "<<peakIndexInMountainArray(arr);
}