// We define the usage of capitals in a word to be right when one of the following cases holds: 1. All letters in this word are capitals, like "USA". 2. All letters in this word are not capitals, like "leetcode". 3. Only the first letter in this word is capital, like "Google". Given a string word, return true if the usage of capitals in it is right.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool detectCapitalUse(string word) {
        for (int i = 1; i < word.length(); ++i)
          if (isupper(word[1]) != isupper(word[i]) ||
              islower(word[0]) && isupper(word[i]))
            return false;
        return true;
    }
};
int main(){
    Solution solution;
    string word = "USA";
    bool isCapital = solution.detectCapitalUse(word);
    if (isCapital) cout<<"The capitalization of "<<word<<" is correct."<<endl;
    else cout<<"The capitalization of "<<word <<" is incorrect."<< endl;

    word = "GooGle";
    isCapital = solution.detectCapitalUse(word);
    if (isCapital) cout<<"The capitalization of "<<word<<" is correct."<<endl;
    else cout<<"The capitalization of "<<word <<" is incorrect."<< endl;

    word = "leetcode";
    isCapital = solution.detectCapitalUse(word);
    if (isCapital) cout<<"The capitalization of "<<word<<" is correct."<<endl;
    else cout<<"The capitalization of "<<word <<" is incorrect."<< endl;
}