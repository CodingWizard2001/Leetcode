// Given an integer num, return the number of steps to reduce it to zero. In one step, if the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfSteps(int num) {
        int ans = 0;
        while(num > 0){
            if(num % 2 == 0) num /= 2;
            else num -= 1;
            ++ans;
        }
        return ans;
    }
};
int main(){
    Solution solution;

    int num = 5;
    cout<<"Number of steps required to reduce "<<num<<" to 0: "<<solution.numberOfSteps(num)<<endl;

    num = 17;
    cout<<"Number of steps required to reduce "<<num<<" to 0: "<<solution.numberOfSteps(num)<<endl;

    num = 22;
    cout<<"Number of steps required to reduce "<<num<<" to 0: "<<solution.numberOfSteps(num)<<endl;

}