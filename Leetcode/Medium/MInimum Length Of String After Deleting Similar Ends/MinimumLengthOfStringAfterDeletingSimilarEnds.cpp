// Given a string s consisting only of characters 'a', 'b', and 'c'. You are asked to apply the following algorithm on the string any number of times:
// 1.   Pick a non-empty prefix from the string s where all the characters in the prefix are equal.
// 2.   Pick a non-empty suffix from the string s where all the characters in this suffix are equal.
// 3.   The prefix and the suffix should not intersect at any index.
// 4.   The characters from the prefix and suffix must be the same.
// 5.   Delete both the prefix and the suffix.
// Return the minimum length of s after performing the above operation any number of times (possibly zero times).

#include<iostream>
#include<string>
using namespace std;
int minimumLength(string s){
    int i = 0,j = s.length() - 1;
    while(i < j && s[i] == s[j]){
        const char c = s[i];
        while(i <= j && s[i] == s[j]) ++i;
        while(i <= j && s[i] == s[j]) --j;
    }
    return j - i + 1;
}
int main(){
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    cout<<"The minimum length of "<<s<<" after performing the above operation will be : "<<minimumLength(s);
}