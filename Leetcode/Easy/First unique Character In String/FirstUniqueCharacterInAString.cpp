// Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int firstUniqChar(string s) {
    vector<int> count(26);
    for (const char c : s) ++count[c - 'a'];
    for (int i = 0; i < s.length(); ++i)
        if (count[s[i] - 'a'] == 1) return i;
    return -1;
}
int main(){
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    cout<<"The first non-repeating character in "<<s<<" and it's index is : "<<firstUniqChar(s);
}