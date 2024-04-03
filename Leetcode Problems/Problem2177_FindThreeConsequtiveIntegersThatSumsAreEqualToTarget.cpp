// Given an integer num, return three consecutive integers (as a sorted array) that sum to num. If num cannot be expressed as the sum of three consecutive integers, return an empty array.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        if (num % 3) return {};
        const long long x = num / 3;
        return {x - 1, x, x + 1};
    }
};
int main(){
    Solution solution;
    long long num = 74;
    vector<long long> result = solution.sumOfThree(num);
    if (result.empty()) {
        cout<<"No three consecutive integers whose sum is "<<num<<" exist."<< endl;
    }
    else {
        cout<<"Three consecutive integers whose sum is " <<num<<" are: ";
        for (long long x : result) {
            cout << x << " ";
        }
        cout << endl;
    }
    
    num = 52;
    result = solution.sumOfThree(num);
    if (result.empty()) {
        cout<<"No three consecutive integers whose sum is "<<num<<" exist."<< endl;
    }
    else {
        cout<<"Three consecutive integers whose sum is " <<num<<" are: ";
        for (long long x : result) {
            cout << x << " ";
        }
        cout << endl;
    }
    
    num = 21;
    result = solution.sumOfThree(num);
    if (result.empty()) {
        cout<<"No three consecutive integers whose sum is "<<num<<" exist."<< endl;
    }
    else {
        cout<<"Three consecutive integers whose sum is " <<num<<" are: ";
        for (long long x : result) {
            cout << x << " ";
        }
        cout << endl;
    }
}