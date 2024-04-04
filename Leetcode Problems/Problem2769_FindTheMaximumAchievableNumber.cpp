// You are given two integers, num and t. An integer x is called achievable if it can become equal to num after applying the following operation no more than t times: Increase or decrease x by 1, and simultaneously increase or decrease num by 1. Return the maximum possible achievable number. It can be proven that there exists at least one achievable number.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        return num + 2 * t;
    }
};
int main(){
    Solution solution;

    int num = 4,t = 1;
    cout<<"Maximum achievable value of X: "<<solution.theMaximumAchievableX(num, t)<<endl;

    num = 42,t = 5;
    cout<<"Maximum achievable value of X: "<<solution.theMaximumAchievableX(num, t)<<endl;
    
    num = 14,t = 3;
    cout<<"Maximum achievable value of X: "<<solution.theMaximumAchievableX(num, t)<<endl;

}