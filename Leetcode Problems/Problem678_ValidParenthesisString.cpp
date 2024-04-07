// Given a string s containing only three types of characters: '(', ')' and '*', return true if s is valid.The following rules define a valid string: 1. Any left parenthesis '(' must have a corresponding right parenthesis ')'. 2. Any right parenthesis ')' must have a corresponding left parenthesis '('. 3. Left parenthesis '(' must go before the corresponding right parenthesis ')'. 4. '*' could be treated as a single right parenthesis ')' or a single left parenthesis '(' or an empty string "".

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkValidString(string s) {
        int low = 0;  
        int high = 0; 
        for (const char c : s) {
          switch (c) {
            case '(':
              ++low;
              ++high;
              break;
            case ')':
              low = max(0, --low);
              --high;
              break;
            case '*':
              low = max(0, --low);
              ++high;
              break;
          }
          if (high < 0)
            return false;
        }
        return low == 0;
    }
};
int main(){
    Solution solution;

    // First Input
    string s = "((*))";
    if (solution.checkValidString(s)) cout << "The string is valid." << endl;
    else cout << "The string is not valid." << endl;

    // Second Input
    s = "(((*)";
    if (solution.checkValidString(s)) cout << "The string is valid." << endl;
    else cout << "The string is not valid." << endl;

    // Third Input
    s = "(*)";
    if (solution.checkValidString(s)) cout << "The string is valid." << endl;
    else cout << "The string is not valid." << endl;
}