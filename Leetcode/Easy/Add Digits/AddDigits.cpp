// Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

#include<iostream>
using namespace std;
int addDigits(int num) {
    return 1 + (num - 1) % 9;
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"After adding : "<<addDigits(num);
}