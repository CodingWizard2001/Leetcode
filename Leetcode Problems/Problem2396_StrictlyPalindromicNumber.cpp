// An integer n is strictly palindromic if, for every base b between 2 and n - 2 (inclusive), the string representation of the integer n in base b is palindromic. Given an integer n, return true if n is strictly palindromic and false otherwise. A string is palindromic if it reads the same forward and backward.


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        return false;
    }
};
int main(){
    Solution solution;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(solution.isStrictlyPalindromic(n)) cout <<n<< " is strictly palindromic."<<endl;
    else cout<<n<<" is not strictly palindromic."<< endl;
}