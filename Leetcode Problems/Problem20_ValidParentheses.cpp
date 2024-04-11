// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid. An input string is valid if:

// 1. Open brackets must be closed by the same type of brackets.
// 2. Open brackets must be closed in the correct order.
// 3. Every close bracket has a corresponding open bracket of the same type.


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int pop(stack<char>& stack) {
        const int c = stack.top();
        stack.pop();
        return c;
    }
    bool isValid(string s) {
        stack<char> stack;
        for (const char c : s)
          if (c == '(')
            stack.push(')');
          else if (c == '{')
            stack.push('}');
          else if (c == '[')
            stack.push(']');
          else if (stack.empty() || pop(stack) != c)
            return false;

        return stack.empty();
      }
};
int main(){
    Solution solution;

    string input = "()";
    if(solution.isValid(input)) cout<<"The parentheses are valid"<<endl;
    else cout<<"The parentheses are not valid"<< endl;

    input = "()[]{}";
    if(solution.isValid(input)) cout<<"The parentheses are valid"<<endl;
    else cout<<"The parentheses are not valid"<< endl;

    input = "(]";
    if(solution.isValid(input)) cout<<"The parentheses are valid"<<endl;
    else cout<<"The parentheses are not valid"<< endl;
}