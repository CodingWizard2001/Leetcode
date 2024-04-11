// Write a function to find the longest common prefix string amongst an array of strings. If there is no common prefix, return an empty string "".

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        sort(strs.begin(),strs.end());
        string s = "";
        string first = strs[0];
        string last = strs[n - 1];
        for(int i = 0;i < min(first.size(),last.size());i++){
            if(first[i] == last[i]) s += first[i];
            else return s;
        }
        return s;
    }
};
int main(){
    Solution solution;

    vector<string> strs = {"flower", "flow", "flight"};
    string commonPrefix = solution.longestCommonPrefix(strs);
    cout<<"Longest common prefix: "<<commonPrefix<<endl;

    strs = {"dog","racecar","car"};
    commonPrefix = solution.longestCommonPrefix(strs);
    cout<<"Longest common prefix: "<<commonPrefix<<endl;
}