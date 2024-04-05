// Given a string s of lower and upper case English letters. A good string is a string which doesn't have two adjacent characters s[i] and s[i + 1] where: 0 <= i <= s.length - 2. s[i] is a lower-case letter and s[i + 1] is the same letter but in upper-case or vice-versa. To make the string good, you can choose two adjacent characters that make the string bad and remove them. You can keep doing this until the string becomes good. Return the string after making it good. The answer is guaranteed to be unique under the given constraints.


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string makeGood(string s) {
        string ans;
        for (const char c : s)
          if (!ans.empty() && isBadPair(ans.back(),c)) ans.pop_back();
          else ans.push_back(c);
        return ans;
      }
      bool isBadPair(char a, char b) {
        return a != b && tolower(a) == tolower(b);
      }
};
int main(){
    Solution solution;
    string s = "leeEetcode";
    cout<<"String after removing bad pairs: "<<solution.makeGood(s)<<endl;

    s = "abBAcC";
    cout<<"String after removing bad pairs: "<<solution.makeGood(s)<<endl;

    s = "sSs";
    cout<<"String after removing bad pairs: "<<solution.makeGood(s)<<endl;
}