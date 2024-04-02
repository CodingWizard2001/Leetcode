// Given two strings s and t, determine if they are isomorphic. Two strings s and t are isomorphic if the characters in s can be replaced to get t. All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> charToIndex_s(128);
        vector<int> charToIndex_t(128);

        for (int i = 0; i < s.length(); ++i) {
          if (charToIndex_s[s[i]] != charToIndex_t[t[i]])
            return false;
          charToIndex_s[s[i]] = i + 1;
          charToIndex_t[t[i]] = i + 1;
        }
        return true;
    }
};
int main(){
    Solution solution;
    string s,t;
    cout<<"Enter the first string: ";
    cin>>s;
    cout<<"Enter the second string: ";
    cin>>t;
    if(solution.isIsomorphic(s,t)) {
        cout<<"The strings are isomorphic."<<endl;
    } 
    else{
        cout<<"The strings are not isomorphic."<< endl;
    }
}