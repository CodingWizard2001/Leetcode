// Given an integer n, return a string array answer (1-indexed) where:

// answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
// answer[i] == "Fizz" if i is divisible by 3.
// answer[i] == "Buzz" if i is divisible by 5.
// answer[i] == i (as a string) if none of the above conditions are true.

#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<string> fizzBuzz(int n){
    vector<string>ans;
    for(int i = 1;i <= n;i++){
        string s;
        if(i % 3 == 0) s += "Fizz";
        if(i % 5 == 0) s += "Buzz";
        ans.push_back(s.empty() ? to_string(i) : s);
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    vector<string>result = fizzBuzz(n);
    for(int i = 0;i < result.size();i++){
        cout<<result[i]<<" ";
    }
}