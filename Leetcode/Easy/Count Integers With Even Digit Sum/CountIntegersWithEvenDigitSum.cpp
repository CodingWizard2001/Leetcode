// Given a positive integer num, return the number of positive integers less than or equal to num whose digit sums are even. The digit sum of a positive integer is the sum of all its digits.

#include<iostream>
using namespace std;
int getDigitSum(int num) {
    int digitSum = 0;
    while (num > 0) {
        digitSum += num % 10;
        num /= 10;
    }
    return digitSum;
}
int countEven(int num) {
    return (num - getDigitSum(num) % 2) / 2;
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Sum of all its digits will be : "<<countEven(num); 
}