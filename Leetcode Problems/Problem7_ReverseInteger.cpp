// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        long ans = 0;
        while(x != 0){
            int digit = (x % 10);
            ans = (ans * 10) + digit;
            x /= 10;
        }
        return (ans <= INT_MIN || ans >= INT_MAX) ? 0 : ans;
    }
};
int main(){
    Solution solution;

    int num = 134; 
    int reversedNum = solution.reverse(num);
    cout<<"Reversed integer of "<<num<<" is : "<<reversedNum<<endl;

    num = 343; 
    reversedNum = solution.reverse(num);
    cout<<"Reversed integer of "<<num<<" is : "<<reversedNum<<endl;

    num = 7456; 
    reversedNum = solution.reverse(num);
    cout<<"Reversed integer of "<<num<<" is : "<<reversedNum<<endl;
}