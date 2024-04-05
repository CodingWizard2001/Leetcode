// Given an array of integers citations where citations[i] is the number of citations a researcher received for their ith paper and citations is sorted in ascending order, return the researcher's h-index.


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hIndex(vector<int>& citations) {
        const int n = citations.size();
        int l = 0;
        int r = n;

        while (l < r) {
          const int m = (l + r) / 2;
          if (citations[m] >= n - m)
            r = m;
          else
            l = m + 1;
        }

        return n - l;
    }
};
int main(){
    Solution solution;

    vector<int> citations = {3,0,1,6,5};
    cout<<"The H-index of the researcher is: " <<solution.hIndex(citations)<<endl;

    citations = {1,2,100};
    cout<<"The H-index of the researcher is: " <<solution.hIndex(citations)<<endl;

    citations = {2,4,6,2};
    cout<<"The H-index of the researcher is: " <<solution.hIndex(citations)<<endl;
}