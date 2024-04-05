// Given an array of integers citations where citations[i] is the number of citations a researcher received for their ith paper, return the researcher's h-index.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hIndex(vector<int>& citations) {
        const int n = citations.size();

        sort(citations.begin(),citations.end());

        for (int i = 0; i < n; ++i)
          if (citations[i] >= n - i)
            return n - i;

        return 0;
    }
};
int main(){
    Solution solution;

    vector<int> citations = {3,0,1,6,5};
    cout<<"The H-index of the researcher is: " <<solution.hIndex(citations)<<endl;

    citations = {3,0,1};
    cout<<"The H-index of the researcher is: " <<solution.hIndex(citations)<<endl;

    citations = {2,4,6,2};
    cout<<"The H-index of the researcher is: " <<solution.hIndex(citations)<<endl;
}