// You are given two non-negative integers num1 and num2.In one operation, if num1 >= num2, you must subtract num2 from num1, otherwise subtract num1 from num2. Return the number of operations required to make either num1 = 0 or num2 = 0.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countOperations(int num1, int num2) {
        int ans = 0;
        while (num1 && num2) {
          if (num1 < num2)
            swap(num1, num2);
          ans += num1 / num2;
          num1 %= num2;
        }
        return ans;
    }
};
int main(){
    Solution solution;

    int num1  = 7, num2 = 13;
    cout<<"Number of operations required to make the two numbers equal: "<<solution.countOperations(num1, num2)<<endl;

    num1  = 5, num2 = 3;
    cout<<"Number of operations required to make the two numbers equal: "<<solution.countOperations(num1, num2)<<endl;

    num1  = 12, num2 = 21;
    cout<<"Number of operations required to make the two numbers equal: "<<solution.countOperations(num1, num2)<<endl;
}