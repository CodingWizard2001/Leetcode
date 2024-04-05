// You are given an array people where people[i] is the weight of the ith person, and an infinite number of boats where each boat can carry a maximum weight of limit. Each boat carries at most two people at the same time, provided the sum of the weight of those people is at most limit. Return the minimum number of boats to carry every given person.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int ans = 0;
        sort(people.begin(), people.end());
        int start = 0;
        int end = people.size() - 1;
        while (start < end) {
          ans++;
          if (people[start] + people[end] <= limit) {
            start++;
          }
          end--;
        }
        return ans + (start == end ? 1 : 0);
    }
};
int main(){
    Solution solution;
    int limit = 3;
    vector<int> people = {3,2,2,1};
    cout<<"Minimum number of rescue boats needed: " <<solution.numRescueBoats(people, limit)<<endl;

    limit = 3;
    people = {2,1};
    cout<<"Minimum number of rescue boats needed: " <<solution.numRescueBoats(people, limit)<<endl;

    limit = 5;
    people = {3,2,2,1,5,4};
    cout<<"Minimum number of rescue boats needed: " <<solution.numRescueBoats(people, limit)<<endl;
}