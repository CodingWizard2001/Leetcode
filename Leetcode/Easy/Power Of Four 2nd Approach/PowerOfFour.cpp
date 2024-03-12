// Given an integer n, return true if it is a power of four. Otherwise, return false.

#include<bits/stdc++.h>
using namespace std;
bool isPowerOfFour(int n){
    return n > 0 && __builtin_popcountll(n) == 1 && (n - 1) %3 == 0;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(isPowerOfFour(n)){
        cout<<n<<" is a power of four";
    }
    else{
        cout<<n<<" is not a power of four";
    }
}