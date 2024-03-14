// Given a non-negative integer num, return true if num can be expressed as the sum of any non-negative integer and its reverse, or false otherwise.


#include<iostream>
using namespace std;
int reversed(int num){
    int ans = 0;
    while (num > 0) {
        ans = ans * 10 + num % 10;
        num /= 10;
    }
    return ans;
}
bool sumOfNumberAndReverse(int num){
    for (int i = num / 2; i <= num; ++i){
        if (num == i + reversed(i)){
            return true;
        }
    }
    return false;        
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(sumOfNumberAndReverse(num)) cout<<num<<" can be expressed as the sum of any non-negative integer and its reverse";
    else cout<<num<<" can't be expressed as the sum of any non-negative integer and its reverse";
}