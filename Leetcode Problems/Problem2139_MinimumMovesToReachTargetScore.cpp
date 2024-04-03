// You are playing a game with integers. You start with the integer 1 and you want to reach the integer target.In one move, you can either: 1. Increment the current integer by one (i.e., x = x + 1). 2. Double the current integer (i.e., x = 2 * x). You can use the increment operation any number of times, however, you can only use the double operation at most maxDoubles times. Given the two integers target and maxDoubles, return the minimum number of moves needed to reach target starting with 1.


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int steps = 0;
        while (target > 1 && maxDoubles) {
          if (target % 2 == 1) --target;
          else {
            target /= 2;
            --maxDoubles;
          }
          ++steps;
        }
        return steps + target - 1;
    }
};
int main(){
     Solution solution;

    int target = 5, maxDoubles = 0;
    cout<<"Minimum number of moves required : " <<solution.minMoves(target, maxDoubles)<< endl;

    target = 19, maxDoubles = 4;
    cout<<"Minimum number of moves required : " <<solution.minMoves(target, maxDoubles)<< endl;

    target = 15, maxDoubles = 2;
    cout<<"Minimum number of moves required : " <<solution.minMoves(target, maxDoubles)<< endl;
}