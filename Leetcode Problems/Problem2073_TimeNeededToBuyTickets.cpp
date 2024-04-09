// There are n people in a line queuing to buy tickets, where the 0th person is at the front of the line and the (n - 1)th person is at the back of the line. You are given a 0-indexed integer array tickets of length n where the number of tickets that the ith person would like to buy is tickets[i]. Each person takes exactly 1 second to buy a ticket. A person can only buy 1 ticket at a time and has to go back to the end of the line (which happens instantaneously) in order to buy more tickets. If a person does not have any tickets left to buy, the person will leave the line. Return the time taken for the person at position k (0-indexed) to finish buying tickets.


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans = 0;
        for (int i = 0; i < tickets.size(); ++i)
          if (i <= k) ans += min(tickets[i], tickets[k]);
          else ans += min(tickets[i], tickets[k] - 1);
        return ans;
    }
};
int main(){
    Solution solution;

    // First Input
    vector<int> tickets = {3, 5, 7, 10, 12};
    int k = 2;
    int totalTime = solution.timeRequiredToBuy(tickets, k);
    cout<<"Total time required to buy "<<k<<" tickets: "<<totalTime<<endl;

    // Second Input
    tickets = {5,1,1,1};
    k = 0;
    totalTime = solution.timeRequiredToBuy(tickets, k);
    cout<<"Total time required to buy "<<k<<" tickets: "<<totalTime<<endl;

    // Third Input
    tickets = {2,4,6,1,7};
    k = 3;
    totalTime = solution.timeRequiredToBuy(tickets, k);
    cout<<"Total time required to buy "<<k<<" tickets: "<<totalTime<<endl;

}