// Given an integer n, return true if it is possible to represent n as the sum of distinct powers of three. Otherwise, return false.


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkPowersOfThree(int n) {
        while (n > 1) {
          const int r = n % 3;
          if (r == 2)
            return false;
          n /= 3;
        }
        return true;
    }
};
int main() {
    Solution solution;
    int n = 12;
    cout<<n<<" is the sum of distinct powers of three : "<<boolalpha<<solution.checkPowersOfThree(n)<<endl;

    n = 91;
    cout<<n<<" is the sum of distinct powers of three : "<<boolalpha<<solution.checkPowersOfThree(n)<<endl;

    n = 21;
    cout<<n<<" is the sum of distinct powers of three : "<<boolalpha<<solution.checkPowersOfThree(n)<<endl;

    return 0;
}