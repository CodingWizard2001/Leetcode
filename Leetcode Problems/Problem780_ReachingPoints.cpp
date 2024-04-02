// Given four integers sx, sy, tx, and ty, return true if it is possible to convert the point (sx, sy) to the point (tx, ty) through some operations, or false otherwise. The allowed operation on some point (x, y) is to convert it to either (x, x + y) or (x + y, y).

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool reachingPoints(int sx, int sy, int tx, int ty) {
        while (sx < tx && sy < ty)
          if (tx > ty) tx %= ty;
          else ty %= tx;

        return sx == tx && sy <= ty && (ty - sy) % sx == 0 || sy == ty && sx <= tx && (tx - sx) % sy == 0;
    }
};
int main(){
    Solution solution;
    int sx, sy, tx, ty;
    cout << "Enter the starting point (sx sy): ";
    cin >> sx >> sy;
    cout << "Enter the target point (tx ty): ";
    cin >> tx >> ty;
    if(solution.reachingPoints(sx, sy, tx, ty)) cout<<"It is possible to reach the target point from the starting point"<<endl;
    else cout<<"It is not possible to reach the target point from the starting point."<<endl;
}