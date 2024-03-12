// You are given a positive integer n. Let even denote the number of even indices in the binary representation of n (0-indexed) with value 1. Let odd denote the number of odd indices in the binary representation of n (0-indexed) with value 1. Return an integer array answer where answer = [even, odd]

#include<iostream>
#include<vector>
using namespace std;
vector<int> evenOddBit(int n){
    vector<int>ans(2);
    int i = 0;
    while(n > 0){
        ans[i] += n & 1;
        n >>= 1;
        i ^= 1;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    vector<int>result = evenOddBit(n);
    cout<<"Output will be : ";
    for(int i = 0;i < result.size();i++){
        cout<<result[i]<<" ";
    }
}