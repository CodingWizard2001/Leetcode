// You are given an integer total indicating the amount of money you have. You are also given two integers cost1 and cost2 indicating the price of a pen and pencil respectively. You can spend part or all of your money to buy multiple quantities (or none) of each kind of writing utensil. Return the number of distinct ways you can buy some number of pens and pencils.


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long ans = 0;
        const int maxPen = total / cost1;

        for (int i = 0; i <= maxPen; ++i)
          ans += (total - i * cost1) / cost2 + 1;

        return ans;
    }
};
int main(){
    Solution solution;
    int total = 15, cost1 = 2, cost2 = 3;
    cout<<"Number of ways to buy pens and pencils: "<<solution.waysToBuyPensPencils(total,cost1,cost2)<<endl;

    total = 50, cost1 = 4, cost2 = 5;
    cout<<"Number of ways to buy pens and pencils: "<<solution.waysToBuyPensPencils(total,cost1,cost2)<<endl;

    total = 85, cost1 = 2, cost2 = 3;
    cout<<"Number of ways to buy pens and pencils: "<<solution.waysToBuyPensPencils(total,cost1,cost2)<<endl;
}