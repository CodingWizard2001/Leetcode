// Given an integer x, return true if x is a palindrome, and false otherwise.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
        long sum = 0;
        while(num > 0){
            int digit = (num % 10);
            sum = sum * 10 + digit;
            num/= 10;
        }
        if(sum == x) return true;
        else return false;
    }
};
int main(){
    Solution solution;

    int num = 121;
    bool x = solution.isPalindrome(num);
    if(x) cout << num << " is a palindrome." << endl;
    else cout << num << " is not a palindrome." << endl;

    num = 167;
    x = solution.isPalindrome(num);
    if(x) cout << num << " is a palindrome." << endl;
    else cout << num << " is not a palindrome." << endl;

    num = 333;
    x = solution.isPalindrome(num);
    if(x) cout << num << " is a palindrome." << endl;
    else cout << num << " is not a palindrome." << endl;
}