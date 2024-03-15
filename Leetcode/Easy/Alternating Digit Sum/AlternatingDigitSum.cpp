// You are given a positive integer n. Each digit of n has a sign according to the following rules: The most significant digit is assigned a positive sign. Each other digit has an opposite sign to its adjacent digits.Return the sum of all digits with their corresponding sign.

#include<iostream>
using namespace std;
int alternateDigitSum(int n) {
    int ans = 0;
    int sign = 1;
    for (; n > 0; n /= 10) {
        sign *= -1;
        ans += sign * n % 10;
    }
    return sign * ans;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Sum will be : "<<alternateDigitSum(n);
}