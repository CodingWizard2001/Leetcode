// Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string toLowerCase(string s) {
        const int diff = 'A' - 'a';
        for (char& c : s)
          if (c >= 'A' && c <= 'Z')
            c -= diff;
        return s;
    }
};
int main(){
    Solution solution;

    string s = "Hello World";
    cout<<"String in lowercase: "<<solution.toLowerCase(s)<<endl;

    s = "I am Rahul Goswami";
    cout<<"String in lowercase: "<<solution.toLowerCase(s)<<endl;

    s = "Practicing Leetcode Problems";
    cout<<"String in lowercase: "<<solution.toLowerCase(s)<<endl;
}