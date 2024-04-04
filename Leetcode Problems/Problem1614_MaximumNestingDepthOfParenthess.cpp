// A string is a valid parentheses string (denoted VPS) if it meets one of the following: 1. It is an empty string "", or a single character not equal to "(" or ")",2. It can be written as AB (A concatenated with B), where A and B are VPS's, or It can be written as (A), where A is a VPS. Given a VPS represented as string s, return the nesting depth of s.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        int opened = 0;
        for (const char c : s)
          if (c == '(') ans = max(ans, ++opened);
          else if (c == ')') --opened;
        return ans;
    }
};
int main(){
    Solution solution;

    string s = "(1+(2*3)+((8)/4))+1";
    cout<<"Maximum depth of nested parentheses: "<<solution.maxDepth(s)<<endl;

    s = "(1)+((2))+(((3)))";
    cout<<"Maximum depth of nested parentheses: "<<solution.maxDepth(s)<<endl;

    s = "(1+(2*3)+((((8)))/4))+1";
    cout<<"Maximum depth of nested parentheses: "<<solution.maxDepth(s)<<endl;

}