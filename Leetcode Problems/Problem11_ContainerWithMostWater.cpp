// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]). Find two lines that together with the x-axis form a container, such that the container contains the most water. Return the maximum amount of water a container can store.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int l = 0;
        int r = height.size() - 1;
        while (l < r) {
          const int minHeight = min(height[l], height[r]);
          ans = max(ans, minHeight * (r - l));
          if (height[l] < height[r]) ++l;
          else --r;
        }
        return ans;
    }
};
int main(){
    Solution solution;
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Max area: " << solution.maxArea(height) << endl;
    return 0;
}