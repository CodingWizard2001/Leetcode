// Write an algorithm to determine if a number n is happy.A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits. Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy. Return true if n is a happy number, and false if not.

#include<iostream>
#include<math.h>
using namespace std;
int squaredSum(int n) {
    int sum = 0;
    while (n) {
        sum += pow(n % 10, 2);
        n /= 10;
    }
    return sum;
}
bool isHappy(int n) {
    int slow = squaredSum(n);
    int fast = squaredSum(squaredSum(n));
    while (slow != fast) {
        slow = squaredSum(slow);
        fast = squaredSum(squaredSum(fast));
    }
    return slow == 1;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(isHappy(n)) cout<<n<<" is a happy number";
    else cout<<n<<" is not a happy number";
}