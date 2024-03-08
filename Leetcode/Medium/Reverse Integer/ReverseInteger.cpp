// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.

#include<iostream>
#include<climits>
using namespace std;
int reverse(int x){
    long ans = 0;
    while(x != 0){
        int digit = x % 10;
        ans = ans * 10 + digit;
        x /= 10;
    }
    return(ans >= INT_MAX && ans <= INT_MIN) ? 0 : ans;
}
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    cout<<"After reversing it will be : "<<reverse(x);
}