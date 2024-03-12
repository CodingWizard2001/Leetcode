// Given an integer n, return true if it is a power of four. Otherwise, return false.

#include<iostream>
using namespace std;
bool isPowerOfFour(int n){
    if(n < 1) return false;
    while(n % 4 == 0) n /= 4;
    return n == 1;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(isPowerOfFour(n)){
        cout<<n<<" is a power of 4";
    }
    else{
        cout<<n<<" is not a power of 4";
    }
}