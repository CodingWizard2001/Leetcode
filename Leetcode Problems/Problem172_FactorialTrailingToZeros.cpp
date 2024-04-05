// Given an integer n, return the number of trailing zeroes in n!.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trailingZeroes(int n) {
        return n == 0 ? 0 : n / 5 + trailingZeroes(n / 5);
    }
};
int main(){
    Solution solution;
    int n = 6;
    cout<<"Number of trailing zeroes in "<<n<<" : "<<solution.trailingZeroes(n)<<endl;

    n = 9;
    cout<<"Number of trailing zeroes in "<<n<<" : "<<solution.trailingZeroes(n)<<endl;

    n = 5;
    cout<<"Number of trailing zeroes in "<<n<<" : "<<solution.trailingZeroes(n)<<endl;
}