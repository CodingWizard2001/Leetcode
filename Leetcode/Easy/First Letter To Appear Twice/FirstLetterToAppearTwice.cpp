// Given a string s consisting of lowercase English letters, return the first letter to appear twice. A letter a appears twice before another letter b if the second occurrence of a is before the second occurrence of b. s will contain at least one letter that appears twice.

#include<bits/stdc++.h>
using namespace std;
char repeatedCharacter(string s) {
    int count = 0;
    map<char, int> mp;
    for (int i = 0; i < s.size(); ++i){
        ++mp[s[i]];
        if (mp[s[i]] == 2) return s[i];
    }
    return -1;
}
int main(){
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    cout<<"The first letter in string "<<s<<" to appear twice is : "<<repeatedCharacter(s);
}