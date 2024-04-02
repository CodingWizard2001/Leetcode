// Given a string s consisting of words and spaces, return the length of the last word in the string.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        while (i >= 0 && s[i] == ' ') --i;
        const int lastIndex = i;
        while (i >= 0 && s[i] != ' ') --i;
        return lastIndex - i;
    }
};
int main(){
    Solution solution;
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    int length = solution.lengthOfLastWord(s);
    cout << "Length of the last word: " << length << endl;
    return 0;
}