// Initially, you have a bank account balance of 100 dollars. You are given an integer purchaseAmount representing the amount you will spend on a purchase in dollars. At the store where you will make the purchase, the purchase amount is rounded to the nearest multiple of 10. In other words, you pay a non-negative amount, roundedAmount, such that roundedAmount is a multiple of 10 and abs(roundedAmount - purchaseAmount) is minimized.If there is more than one nearest multiple of 10, the largest multiple is chosen. Return an integer denoting your account balance after making a purchase worth purchaseAmount dollars from the store.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
     return 100 - ((purchaseAmount + 5) / 10) * 10; 
    }
};
int main() {
    Solution solution;
    int purchaseAmount = 35;
    cout<<"Remaining account balance after the purchase of: $"<<purchaseAmount<<" is : "<<solution.accountBalanceAfterPurchase(purchaseAmount)<<endl;

    purchaseAmount = 20;
    cout<<"Remaining account balance after the purchase of: $"<<purchaseAmount<<" is : "<<solution.accountBalanceAfterPurchase(purchaseAmount)<<endl;

    purchaseAmount = 27;
    cout<<"Remaining account balance after the purchase of: $"<<purchaseAmount<<" is : "<<solution.accountBalanceAfterPurchase(purchaseAmount)<<endl;
}