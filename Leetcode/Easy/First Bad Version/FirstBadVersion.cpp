// You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to be bad. You are given an API bool isBadVersion(version) which returns whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.

#include<iostream>
using namespace std;
bool isBadVersion(int n){
    return n >= 4; // Assuming bad version is 4
}
int firstBadVersion(int n) {
    int l = 1;
    int r = n;
    while (l < r) {
        const int m = l + (r - l) / 2;
        if (isBadVersion(m)) r = m;
        else l = m + 1;
    }
    return l;
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"The first bad one is : "<<firstBadVersion(n);
}