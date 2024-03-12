//  Given a string s consisting of words and spaces, return the length of the last word in the string.

#include<iostream>
#include<string>
using namespace std;
int lengthOfLastWord(string s){
    int i = s.length() - 1;
    while(i >= 0 && s[i] == ' ') --i;
    int lastIndex = i;
    while(i >= 0 && s[i] != ' ') --i;
    return lastIndex - i;
}
int main(){
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    cout<<"Length of the last word in the "<<s<<" will be : "<<lengthOfLastWord(s);
}