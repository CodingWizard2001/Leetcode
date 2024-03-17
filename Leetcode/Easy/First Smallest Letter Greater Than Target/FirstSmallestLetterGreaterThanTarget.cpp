// You are given an array of characters letters that is sorted in non-decreasing order, and a character target. There are at least two different characters in letters.Return the smallest character in letters that is lexicographically greater than target. If such a character does not exist, return the first character in letters.

#include<iostream>
#include<vector>
using namespace std;
char nextGreatestLetter(vector<char>& letters, char target) {
    int l = 0;
    int r = letters.size();
    while (l < r) {
        const int m = (l + r) / 2;
        if (letters[m] > target) r = m;
        else l = m + 1;
    }
    return letters[l % letters.size()];
}
int main(){
    int size;
    cout<<"Enter the size of the arrays : ";
    cin>>size;
    vector<char>letters;
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        char x;
        cin>>x;
        letters.push_back(x);
    }
    char target;
    cout<<"Enter a target character : ";
    cin>>target;
    cout<<"The smallest character in letters that is lexicographically greater than "<<target<<" is : "<<nextGreatestLetter(letters,target);
}