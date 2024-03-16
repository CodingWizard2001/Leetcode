// You are given a string s consisting of lowercase English letters, and an integer k. First, convert s into an integer by replacing each letter with its position in the alphabet (i.e., replace 'a' with 1, 'b' with 2, ..., 'z' with 26). Then, transform the integer by replacing it with the sum of its digits. Repeat the transform operation k times in total.

#include<iostream>
#include<string>
using namespace std;
int getDigitSum(int num) {
    int digitSum = 0;
    while (num > 0) {
        digitSum += num % 10;
        num /= 10;
    }
    return digitSum;
}
int convert(string s) {
    int sum = 0;
    for (const char c : s) {
        const int val = c - 'a' + 1;
        sum += val < 10 ? val : (val % 10 + val / 10);
    }
    return sum;
}
int getLucky(string s, int k) {
    int ans = convert(s);
    for (int i = 1; i < k; ++i) ans = getDigitSum(ans);
    return ans;
}
int main(){
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    int k;
    cout<<"Enter the value of k : ";
    cin>>k;
    cout<<"Sum of its digits after converting "<<s<<" will be : "<<getLucky(s,k);
}