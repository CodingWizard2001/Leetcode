// You are given an integer array prices representing the prices of various chocolates in a store. You are also given a single integer money, which represents your initial amount of money. You must buy exactly two chocolates in such a way that you still have some non-negative leftover money. You would like to minimize the sum of the prices of the two chocolates you buy. Return the amount of money you will have leftover after buying the two chocolates. If there is no way for you to buy two chocolates without ending up in debt, return money. Note that the leftover must be non-negative.

#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int buyChoco(vector<int>& prices, int money){
    int min1 = INT_MAX;
    int min2 = INT_MAX;
    for(const int price : prices){
        if(price <= min1){
            min2 = min1;
            min1 = price;
        }
        else if(price < min2){
            min2 = price;
        }
    }
    const int minCost = min1 + min2;
    return minCost > money ? money : minCost - money;
}
int main(){
    int size;
    cout<<"Enter the size of  the array : ";
    cin>>size;
    vector<int>prices;
    cout<<"Given input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        prices.push_back(x);
    }
    int money;
    cout<<"Enter the amount of money : ";
    cin>>money;
    cout<<"The amount of money you will have leftover after buying the two chocolates is : "<<buyChoco(prices,money);
}