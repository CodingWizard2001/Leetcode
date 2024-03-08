// Given an integer x, return true if x is a palindrome, and false otherwise.

#include<iostream>
using namespace std;
bool isPalindrome(int x){
    int n = x;
    long sum = 0;
    while(n > 0){
        int digit = n % 10;
        sum = sum * 10 + digit;
        n /= 10;
    }
    return sum == x;
}
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    if(isPalindrome(x)){
        cout<<x<<" is a palindrome number";
    }
    else{
        cout<<x<<" is not a palindrome number";
    }
}