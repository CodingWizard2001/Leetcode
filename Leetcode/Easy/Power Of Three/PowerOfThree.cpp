// Given an integer n, return true if it is a power of three. Otherwise, return false.

#include<iostream>
using namespace std;
bool isPowerOfThree(int n){
    if(n < 1) return false;
    while(n % 3 == 0) n /= 3;
    return n == 1;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(isPowerOfThree(n)){
        cout<<n<<" is a power of 3";
    }
    else{
        cout<<n<<" is not a power of 3";
    }
}