// Given an integer n, return true if it is a power of two. Otherwise, return false.

#include<iostream>
using namespace std;
bool isPowerOfTwo(int n){
    if(n <= 0) return false;
    return (n & (n - 1)) == 0;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(isPowerOfTwo(n)){
        cout<<n<<" is a power of 2";
    }
    else{
        cout<<n<<" is not a power of 2";
    }
}
