// You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money. Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int coinChange(vector<int>& coins, int amount){
        vector<int>dp(amount + 1,amount + 1);
        dp[0] = 0;
        for(int i = 1;i <= amount;i++){
            for(const int coin : coins){
                if(coin <= i) dp[i] = min(dp[i],dp[i - coin] + 1);
            }
        }
        return dp[amount] == amount + 1 ? -1 : dp[amount];
    }
};
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>coins;
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        coins.push_back(x);
    }
    int amount;
    cout<<"Enter the amount : ";
    cin>>amount;
    Solution solve;
    cout<<"The fewest number of coins that you need to make up that "<<amount<<" will be : "<<solve.coinChange(coins,amount);
}