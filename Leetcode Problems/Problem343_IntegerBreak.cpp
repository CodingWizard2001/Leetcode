// Given an integer n, break it into the sum of k positive integers, where k >= 2, and maximize the product of those integers. Return the maximum product you can get.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int integerBreak(int n) {
         if (n == 2)  return 1;
        if (n == 3)  return 2;
        int ans = 1;
        while (n > 4) {
          n -= 3;
          ans *= 3;
        }
        ans *= n;
        return ans;
    }
};
int main() {
    Solution solution;
    int n = 12; 
    cout<<"Maximum product of integers after breaking " <<n<<" : "<<solution.integerBreak(n)<<endl;

    int n = 21; 
    cout<<"Maximum product of integers after breaking " <<n<<" : "<<solution.integerBreak(n)<<endl;

    int n = 5; 
    cout<<"Maximum product of integers after breaking " <<n<<" : "<<solution.integerBreak(n)<<endl;

    return 0;
}