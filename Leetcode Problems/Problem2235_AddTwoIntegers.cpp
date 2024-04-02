// Given two integers num1 and num2, return the sum of the two integers.


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sum(int num1, int num2) {
        return num1 + num2;
    }
};
int main() {
    Solution solution;
    int num1 = 12;
    int num2 = 30;
    cout<<"Sum of "<<num1<<" & "<<num2<<" is : "<< solution.sum(num1, num2)<<endl;

    num1 = 3;
    num2 = -30;
    cout<<"Sum of "<<num1<<" & "<<num2<<" is : "<< solution.sum(num1, num2)<<endl;

    num1 = 4;
    num2 = 50;
    cout<<"Sum of "<<num1<<" & "<<num2<<" is : "<< solution.sum(num1, num2)<<endl;

    return 0;
}